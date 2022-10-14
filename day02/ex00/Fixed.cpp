#include "Fixed.hpp"

Fixed::Fixed(): _val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assigenment operator called" << std::endl;
	if (this != &rhs)
		this->_val = rhs.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw) {
	this->_val = raw;
	return ;
}