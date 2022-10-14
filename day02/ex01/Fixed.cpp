#include "Fixed.hpp"

Fixed::Fixed(): _val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const i): _val(i){
	std::cout << "Int constructor called" << std::endl;
	this->_val = i << this->_bits;
	return;
}

Fixed::Fixed(float const f) : _val(f){
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(f * (1 << this->_bits));
	return;
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

int Fixed::toInt() const {
	return (this->_val >> this->_bits);
}

float Fixed::toFloat() const {
	return ((float)this->_val / (float)(1 << this->_bits));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assigenment operator called" << std::endl;
	if (this != &rhs)
		this->_val = rhs._val;
	return *this;
}

void Fixed::setRawBits(int const raw) {
	this->_val = raw;
	return ;
}

std::ostream & operator<<(std::ostream & o, const Fixed & f) {
	o << f.toFloat();
	return o;
} 