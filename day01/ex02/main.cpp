#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "adress of string : " << &str << std::endl;
    std::cout << "adress held by stringPTR : " << stringPTR << std::endl;
    std::cout << "adress held by stringREF : " << &stringREF << std::endl;
    std::cout << "\n";
    std::cout << "value of string : " << str << std::endl;
    std::cout << "value held by stringPTR : " << *stringPTR << std::endl;
    std::cout << "value held by stringREF : " << stringREF << std::endl;
    return 0;
}