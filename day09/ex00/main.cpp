#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    std::map<std::string, double> db;
    std::string line;
    std::string dbDate;
    double dbValue = 0;
    double inputValue = 0;
    std::string inputDate;
    std::ifstream dbFile("data.csv");
    std::ifstream inputFile(argv[1]);

    if (argc != 2 || !argv[1] || !inputFile.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    if (!parseDbFile(db, dbDate, dbValue))
    {
        std::cout << "Error: Error in data.csv" << std::endl;
        return 1;
    }
    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
        line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
        inputDate = line.substr(0, line.find('|'));
        int year = atoi(inputDate.substr(0, 4).c_str());
        int month = atoi(inputDate.substr(5, 2).c_str());
        int day = atoi(inputDate.substr(8, 2).c_str());
        inputValue = atof(line.substr(line.find('|') + 1).c_str());
        if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
        {
            std::cout << "Error: bad input => " << year << '-' << month << '-' << day << std::endl;

            continue;
        }
        if (std::count(line.begin(), line.begin() + line.find('|'), '-') != 2 || std::count(line.begin() + line.find('|'), line.end(), '.') > 1)
        {
            std::cout << "Error: bad input => " << inputValue << std::endl;
            continue;
        }
        if (inputValue < 0)
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if (inputValue > 1000)
        {
            std::cout << "Error: too large number." << std::endl;
            continue;
        }
        std::map<std::string, double>::iterator it = db.lower_bound(inputDate);
        if (it->first != inputDate)
            it--;
        if (it == db.end())
        {
            std::cout << "Error: no data for " << inputDate << std::endl;
            continue;
        }
        double result = inputValue * it->second;
        if (result > 10000000)
            std::cout << std::fixed << std::setprecision(0) << inputDate << " => " << inputValue << " = " << result << std::endl;
        else
            std::cout << inputDate << " => " << inputValue << " = " << result << std::endl;
    }

    return 0;
}