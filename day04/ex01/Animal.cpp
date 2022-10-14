#include "Animal.hpp"

Animal::Animal() {
	std::cout << "[ANIMAL] : Default constructor called" << std::endl;
}

Animal::Animal(const std::string name) {
	setType(name);
}

Animal::~Animal() {
	std::cout << "[ANIMAL] : Default destructor called" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string type) {
	this->type = type;
}

void Animal::makeSound() const {
	std::cout << "* Animal sound  *" << std::endl;
}

Animal & Animal::operator=(Animal & rhs) {
	this->type = rhs.type;
	return *this;
}