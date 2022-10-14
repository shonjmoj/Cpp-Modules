#include "easyfind.hpp"

int main()
{

    std::list<int> list;

    list.push_back(-1);
    list.push_back(2);
    list.push_back(3);

    std::cout << easyfind(list, 1);

    return 0;
}