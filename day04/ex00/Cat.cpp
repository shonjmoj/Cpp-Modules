#include "Cat.hpp"

Cat::Cat() {
	std::cout << "[CAT] : Default constructor called" << std::endl;
	setType("Cat");
}

Cat::Cat(Cat const & copy) {
	type = copy.type;
	std::cout << "[CAT] : Copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "[CAT] : Default destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "* Meoowwww.... *" << std::endl;
}