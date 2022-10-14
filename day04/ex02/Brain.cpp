#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[BRAIN] : Default constructor called" << std::endl;
}

Brain::Brain(Brain const & copy) {
	int i = 0;
	while(i++ < 100)
		ideas[i] = copy.ideas[i];
	std::cout << "[BRAIN] : Copy constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "[BRAIN] : Default Destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {
	int i= 0;
	while (i++ < 100)
		ideas[i] = rhs.ideas[i];
	return *this;
}