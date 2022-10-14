#include "Brain.cpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *a = new Dog();
	a->makeSound();
	a->~Animal();
	return 0;
}