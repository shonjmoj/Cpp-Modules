#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *_a;
    unsigned int _index;

public:
    Array<T>()
    {
        _a = NULL;
        _index = 0;
    };

    Array<T>(unsigned int n)
    {
        this->_a = new T[n];
        this->_index = n - 1;
        for (size_t i = 0; i < n; i++)
        {
            this->_a[i] = T();
        }
    };


    ~Array<T>()
    {  
        delete [] this->_a;
    };

    Array<T>(Array<T> const &copy)
    {
        *this = copy;
    }

    int size() const
    {
        return _index + 1;
    };

    class InvalideAccessElement : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "index out of range!";
        }
    };

    T &operator[](unsigned int n)
    {
        if (n > this->_index)
            throw InvalideAccessElement();
        return this->_a[n];
    }

    Array<T> &operator=(Array<T> const &rhs)
    {
        this->_a = new T[rhs.size()];
        for (int  i = 0; i < rhs.size(); i++)
        {
            this->_a[i] = rhs._a[i];
        }
        this->_index = rhs._index;
        return *this;
    }
};

#endif