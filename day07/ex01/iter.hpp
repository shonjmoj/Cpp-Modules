#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, int size, void (f)(T const &))
{
    int i = 0;
    while (i < size)
    {
        f(arr[i]);
        i++;
    }
}

#endif