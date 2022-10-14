#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[BRAIN] : Default constructor called" << std::endl;
}

Brain::Brain(Brain const & copy) {
	for(int i = 0; i < 100; i++) 
		ideas[i] = copy.ideas[i];
	std::cout << "[BRAIN] : Copy constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "[BRAIN] : Default destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {
	for(int i = 0; i < 100; i++) 
		ideas[i] = rhs.ideas[i];
	return *this;
}