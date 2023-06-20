#include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    std::list<int> array;
    std::vector<int> array2;
    clock_t list_time = 0;
    clock_t vector_time = 0;

    if (argc < 2)
    {
        std::cout << "Error: Invalid args !" << std::endl;
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        if (atoi(argv[i]) < 0)
        {
            std::cout << "Error: Negative number" << std::endl;
            return 1;
        }
        array.push_back(atoi(argv[i]));
        array2.push_back(atoi(argv[i]));
    }
    std::cout << "Before: ";
    for (std::list<int>::iterator i = array.begin(); i != array.end(); i++)
    {
        std::cout << *i << " ";
    }
    list_time = clock();
    mergeInsertList(array);
    vector_time = clock();
    mergeInsertVector(array2);
    std::cout << "\nAfter: ";
    for (std::vector<int>::iterator i = array2.begin(); i != array2.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::fixed << std::setprecision(5) << "\nTime to process a range of " << array.size() << " elements with std::[list] : " << static_cast<double>(clock() - list_time) / CLOCKS_PER_SEC << " us" << std::endl;
    std::cout << std::fixed << std::setprecision(5) << "Time to process a range of " << array2.size() << " elements with std::[vector] : " << static_cast<double>(clock() - vector_time) / CLOCKS_PER_SEC << " us" << std::endl;
}