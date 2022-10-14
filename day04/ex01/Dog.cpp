#include "Dog.hpp"

Dog::Dog() {
	std::cout << "[DOG] : Default constructor called" << std::endl;
	setType("Dog");
	brain = new Brain();
}

Dog::Dog(Dog const & copy) {
	std::cout << "[DOG] : Copy constructor called" << std::endl;
	type = copy.type;
	this->brain = new Brain();
	*(this->brain) = *(copy.brain);
}

Dog::~Dog() {
	std::cout << "[DOG] : Default destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const {
	std::cout << "* Haou Haou.... *" << std::endl;
}