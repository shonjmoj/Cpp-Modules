#include "Base.hpp"
#include <stdlib.h>

Base* generate() {
    srand(time(NULL));
    
    int random = rand() % 3;

    switch (random)
    {
        case 0 :
            return new A();
        case 1 : 
            return new B();
        case 2 : 
            return new C();
        default:
            break;
    }

    return NULL;
}

void identify(Base* p) {
    if (dynamic_cast<A *>(p))
        std::cout << "Type A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "Type B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "Type C\n";
}

void identify(Base & p) {
    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "Type &A\n";
    }
    catch(const std::exception& e)
    {
        try
        {
            B b = dynamic_cast<B &>(p);
            std::cout << "Type &B\n";
        }
        catch(const std::exception& e)
        {
            try
            {
                C c = dynamic_cast<C &>(p);
                std::cout << "Type &C\n";
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
            std::cerr << e.what() << '\n';
        }
        
        std::cerr << e.what() << '\n';
    }
    
}

int main() {
    Base *b = generate();

    identify(b);
    identify(*b);
    return 0;
}