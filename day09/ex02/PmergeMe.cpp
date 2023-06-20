#include "PmergeMe.hpp"

void merge(std::vector<int> &arr, std::vector<int> &left, std::vector<int> &right)
{
    size_t i = 0;
    size_t l = 0;
    size_t r = 0;
    while (l < left.size() && r < right.size())
    {
        if (left[l] < right[r])
        {
            arr[i] = left[l];
            l++;
        }
        else
        {
            arr[i] = right[r];
            r++;
        }
        i++;
    }
    while (l < left.size())
    {
        arr[i] = left[l];
        i++;
        l++;
    }
    while (r < right.size())
    {
        arr[i] = right[r];
        i++;
        r++;
    }
}

void insertSortVector(std::vector<int> &arr)
{
    size_t i = 0;
    int tmp = 0;
    while (i < arr.size())
    {
        tmp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
        i++;
    }
}

void insertionSortList(std::list<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr.front();
        arr.pop_front();
        int j = i - 1;
        while (j >= 0 && arr.front() > key)
        {
            arr.push_back(arr.front());
            arr.pop_front();
            j -= 1;
        }
        arr.push_back(key);
    }
}

void mergeInsertVector(std::vector<int> &arr)
{
    int mid;
    if (arr.size() < 10)
        insertSortVector(arr);

    else
    {
        mid = arr.size() / 2;
        std::vector<int> left(arr.begin(), arr.begin() + mid);
        std::vector<int> right(arr.begin() + mid, arr.end());
        mergeInsertVector(left);
        mergeInsertVector(right);
        merge(arr, left, right);
    }
}

void merge(std::list<int> &arr, std::list<int> &left, std::list<int> &right)
{
    size_t l = 0, r = 0, i = 0;
    while (l < left.size() && r < right.size())
    {
        if (left.front() < right.front())
        {
            arr.push_back(left.front());
            left.pop_front();
            l++;
        }
        else
        {
            arr.push_back(right.front());
            right.pop_front();
            r++;
        }
        i++;
    }
    while (l < left.size())
    {
        arr.push_back(left.front());
        left.pop_front();
        i++;
        l++;
    }
    while (r < right.size())
    {
        arr.push_back(right.front());
        right.pop_front();
        i++;
        r++;
    }
}

void mergeInsertList(std::list<int> &arr)
{
    int mid;
    if (arr.size() < 10)
        insertionSortList(arr);
    else
    {
        mid = arr.size() / 2;
        std::list<int> left;
        std::list<int> right;
        std::list<int>::iterator it = arr.begin();
        for (int i = 0; i < mid; i++)
        {
            left.push_back(*it);
            it++;
        }
        while (it != arr.end())
        {
            right.push_back(*it);
            it++;
        }

        mergeInsertList(left);
        mergeInsertList(right);
        merge(arr, left, right);
    }
}