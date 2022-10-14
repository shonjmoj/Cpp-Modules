#include "Brain.cpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;



	// Animal *arr[100];
	// for(int i = 0; i < 100; i++) {
	// 	if (i < 50)
	// 		arr[i] = new Dog();
	// 	else
	// 		arr[i] = new Cat();
	// } 
	// for(int i = 0; i< 100 ; i++)
	// 	delete arr[i];

	return 0;
}