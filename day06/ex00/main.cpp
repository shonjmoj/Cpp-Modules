#include "Convert.hpp"

bool validType(std::string str){
    int f = 0;
    int dot = 0;
    size_t i = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < str.length())
    {
        if (str[i] == 'f')
            f++;
        if (str[i] == '.')
            dot++;
        if ((dot > 1 || f > 1) || (dot == 0 && f == 1) || (!isdigit(str[i]) && str[i] != 'f' && str[i] != '.'))
            return false;
        i++;
    }
    return true;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::string str = argv[1];
        
        if (!inff(str))
            return 0;
        else if (!validType(str) && !isChar(argv[1]))
        {
            std::cout << "Invalid type !\n";
            return 1;
        }
        convert(argv[1]);
    }
    return 0;
}