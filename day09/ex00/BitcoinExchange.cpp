#include "BitcoinExchange.hpp"

int parseDbFile(std::map<std::string, double> &db, std::string &dbDate, double dbValue)
{
    int year, month, day;
    std::string line;
    std::ifstream dbFile("data.csv");
    if (!dbFile.is_open())
        return 0;
    std::getline(dbFile, line);
    while (std::getline(dbFile, line))
    {
        year = atoi(line.substr(0, 4).c_str());
        month = atoi(line.substr(5, 2).c_str());
        day = atoi(line.substr(8, 2).c_str());
        if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
            return 0;
        dbDate = line.substr(0, line.find(','));
        dbValue = atof(line.substr(line.find(',') + 1).c_str());
        if (dbDate.length() != 10 || dbDate[4] != '-' || dbDate[7] != '-')
            return 0;
        db[dbDate] = dbValue;
    }
    return 1;
}