#include "serialize.hpp"
#include "Data.hpp"

int main() {
    Data obj;
    obj.x = 1;
    Data *ptr = &obj;
    uintptr_t a = serialize(ptr);

    std::cout << "obj.x : " << ptr->x << std::endl; 
    std::cout << "obj : " << ptr << std::endl; 

    std::cout << "\na : " << a << std::endl;
    std::cout << "\nobj.x : " << ptr->x << std::endl;
    std::cout << "obj : " << deserialize(a) << std::endl;

    
}