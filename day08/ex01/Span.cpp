#include "Span.hpp"


Span::Span() {
    return;
}

Span::Span(unsigned int N) : _length(0)
{
    this->_arr.reserve(N);
    this->_capacity = N;
    return;
}

void Span::addNumber(int number) {
    if (this->_arr.size() >= this->_capacity)
        throw NoSpaceLeft();
    this->_arr.push_back(number);
    this->_length++;
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span::~Span()
{
    this->_arr.clear();
    this->_capacity = 0;
    this->_length = 0;
    return;
}

unsigned int Span::getLength() const  {
    return this->_length;
}

unsigned int Span::getCapasity() const  {
    return this->_capacity;
}

void Span::print() const  {
    for (size_t i = 0; i < this->_length; i++)
    {
        std::cout << this->_arr[i] << " ";
    }
    std::cout << "\n";
}

int Span::shortestSpan() const {
    if (this->_arr.empty())
        throw Empty();
    if (this->_arr.size() < 2)
        throw SpanNotFound();

    std::vector<int>::iterator it = (const_cast<Span *>(this))->_arr.begin();
    std::vector<int>::iterator ite = (const_cast<Span *>(this))->_arr.end();
    
    std::sort(it, ite);
    int *span = NULL;

    while(it != ite) {
        std::vector<int>::iterator next = it + 1;
        if (next != ite) 
        {
            if (!span) 
            {
                span = new int();
                *span = *next - *it;
            } 
            else if (*next - *it < *span)
                *span = *next - *it;
        }
        it++;
    }
    int res = *span;
    delete span;
    return res;
}

int Span::longestSpan() const {
    if (this->_arr.empty())
        throw Empty();
    if (this->_arr.size() < 2)
        throw SpanNotFound();
    
    std::vector<int>::iterator it = (const_cast<Span *>(this))->_arr.begin();
    std::vector<int>::iterator ite = (const_cast<Span *>(this))->_arr.end();

    int first = *std::min_element(it, ite);
    int last = *std::max_element(it, ite);

    return last - first;
}

const char *Span::SpanNotFound::what() const throw()
{
    return "No span found !";
}


const char *Span::NoSpaceLeft::what() const throw()
{
    return "No space left !";
}

const char *Span::Empty::what() const throw()
{
    return "Empty !";
}


Span & Span::operator=(Span const & rhs) {
    this->_arr = rhs._arr;
    this->_length = rhs._length;
    this->_capacity = rhs._capacity;
    return *this;
}


void Span::fillArray(unsigned int n) {
    srand(time(NULL));
    for (size_t i = 0; i < n; i++)
    {
        this->addNumber(rand() % 50);
    }
    
}