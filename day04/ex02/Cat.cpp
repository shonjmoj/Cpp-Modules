#include "Cat.hpp"

Cat::Cat() {
	std::cout << "[CAT] : Default constructor called" << std::endl;
	setType("Cat");
	brain = new Brain();
}

Cat::Cat(Cat const & copy) {
	std::cout << "[CAT] : Copy constructor called" << std::endl;
	type = copy.type;
	this->brain = new Brain();
	*(this->brain) = *(copy.brain);
}

Cat::~Cat() {
	std::cout << "[CAT] : Default destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const {
	std::cout << "* Meoowwww.... *" << std::endl;
}