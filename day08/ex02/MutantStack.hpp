#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>  {

    std::vector<T> _container;
    

    public :
        MutantStack() {return;}
        MutantStack(MutantStack<T> const & copy) {*this = copy;}
        ~MutantStack() {
            this->_container.clear();
        }

        typedef typename std::vector<int>::iterator iterator;
        typedef typename std::vector<int>::reverse_iterator riterator;
        typedef typename std::vector<int>::const_iterator const_iterator;
        typedef typename std::vector<int>::const_reverse_iterator const_riterator;



        int size() { return _container.size();}

        iterator begin() {return _container.begin();}

        iterator end() {return _container.end();}
        
        riterator rbegin() {return _container.rbegin();}

        riterator rend() {return _container.rend();}

        const_iterator cbegin() {return _container.cbegin();}

        const_iterator cend() {return _container.cend();}
        
        const_riterator crbegin() {return _container.crbegin();}

        const_riterator crend() {return _container.crend();}



        void push(T element) { _container.push_back(element);}
        
        T & top() {return *this->begin();}

        void pop() {_container.pop_back();}


        MutantStack<T> & operator=(MutantStack<T> const &rhs) {
            if (this != &rhs)
                this->_container = rhs._container;
            return *this;
        }
};

#endif