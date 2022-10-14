#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    std::vector<int> _arr;
    unsigned int _length;
    unsigned int _capacity;

    public:
        Span();
        Span(unsigned int N);
        Span(Span const &copy);
        ~Span();

        Span & operator=(Span const & rhs);

        void print() const ;
        unsigned int getLength() const ;
        unsigned int getCapasity() const ;
        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;

        template<typename T>
        void addNumber(T vec) {
            if ((vec.end() - vec.begin()) + this->_length > this->_capacity)
                throw SpanNotFound();
            else
                std::copy(vec.begin(), vec.end(), std::back_inserter(this->_arr));
            this->_length += vec.end() - vec.begin();
        }

        void fillArray(unsigned int n);


        class Empty : public std::exception
        {
            public:
                const char *what() const throw();
        };
        
        class NoSpaceLeft : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class SpanNotFound : public std::exception
        {
            public:
                const char *what() const throw();
        };

};



#endif