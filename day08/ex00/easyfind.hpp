#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <algorithm>

template <typename T>
bool easyfind(T c, int n)
{
    if (std::find(c.begin(), c.end(), n) != c.end())
        return true;
    return false;
}
#endif