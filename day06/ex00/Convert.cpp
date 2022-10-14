#include "Convert.hpp"

bool isChar(char *arg) {
    if (strlen(arg) > 1 || isdigit(arg[0]))
        return false;
    return true;
}

bool isInt(char *arg) {
    for(size_t i = 0; i < strlen(arg); i++) {
        if (!isdigit(arg[i]) && (atoi(arg) <= -2147483648 || atoi(arg) >= 2147483647))
            return false;
    }
    return true;
}

bool isFloat(char *arg) {
    
    for(size_t i = 0; i < strlen(arg); i++) {
        if (!isdigit(arg[i]))
            return false;
    }
    return true;
}

bool isDouble(char *arg) {
    for(size_t i = 0; i < strlen(arg); i++) {
        if (!isdigit(arg[i]) && arg[i] != '.')
            return false;
    }
    return true;
}


void convert(char *arg) {
    if (isChar(arg)) {
        std::cout << "char : '" << static_cast<char>(arg[0]) << "'" << std::endl;
        std::cout << "int : " << static_cast<int>(arg[0]) << std::endl;
        std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(arg[0]) << "f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(arg[0]) << std::endl;

    }
    else if (isInt(arg)) {
        if (static_cast<char>(atoi(arg)) <= 31)
            std::cout << "char : Non displayable" << std::endl;
        else
            std::cout << "char : '" << static_cast<char>(atoi(arg)) << "'" << std::endl;
        std::cout << "int : " << static_cast<int>(atoi(arg)) << std::endl;
        std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(atoi(arg)) << "f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(atoi(arg)) << std::endl;

    }
    else if (isFloat(arg)) {
        std::cout << "char : '" << static_cast<char>(atoi(arg)) << "'" << std::endl;
        std::cout << "int : " << static_cast<int>(atoi(arg)) << std::endl;
        std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(atoi(arg)) << "f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(atoi(arg)) << std::endl;

    }
    else if (isDouble(arg)) {
        std::cout << "char : '" << static_cast<char>(atoi(arg)) << "'" << std::endl;
        std::cout << "int : " << static_cast<int>(atoi(arg)) << std::endl;
        std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(atoi(arg)) << "f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(atoi(arg)) << std::endl;

    }
}

int inff(std::string str) {
    if (str == "nan") {
        std::cout << "char : impossbile" << std::endl;
        std::cout << "int : impossbile" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
        return 0;
        }
    if (str == "+inf") {
        std::cout << "char : impossbile" << std::endl;
        std::cout << "int : impossbile" << std::endl;
        std::cout << "float : +inf" << std::endl;
        std::cout << "double : +inf" << std::endl;
        return 0;
    }
    if (str == "-inf") {
        std::cout << "char : impossbile" << std::endl;
        std::cout << "int : impossbile" << std::endl;
        std::cout << "float : -inf" << std::endl;
        std::cout << "double : -inf" << std::endl;
        return 0;
    }
    if (str == "+inff") {
        std::cout << "char : impossbile" << std::endl;
        std::cout << "int : impossbile" << std::endl;
        std::cout << "float : +inff" << std::endl;
        std::cout << "double : +inff" << std::endl;
        return 0;
    }
    if (str == "-inff") {
        std::cout << "char : impossbile" << std::endl;
        std::cout << "int : impossbile" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inff" << std::endl;
        return 0;
    }
    return 1;
}
