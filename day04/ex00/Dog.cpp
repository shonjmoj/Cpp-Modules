#include "Dog.hpp"

Dog::Dog() {
	std::cout << "[DOG] : Default constructor called" << std::endl;
	setType("Dog");
}

Dog::Dog(Dog const & copy) {
	type = copy.type;
	std::cout << "[DOG] : Default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "[DOG] : Default destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "* Haou Haou.... *" << std::endl;
}