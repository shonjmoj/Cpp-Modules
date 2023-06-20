#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Invalid args !" << std::endl;
        return 1;
    }
    std::string str = argv[1];
    execution(str);

    return 0;
}