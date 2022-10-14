#include "Fixed.hpp"

Fixed::Fixed(): _val(0) {
	return ;
}

Fixed::Fixed(int const i): _val(i){
	this->_val = i << this->_bits;
	return;
}

Fixed::Fixed(float const f) : _val(f){
	this->_val = roundf(f * (1 << this->_bits));
	return;
}

Fixed::Fixed(Fixed const & copy) {
	*this = copy;
	return ;
}

Fixed::~Fixed() {
	return;
}

int Fixed::toInt() const {
	return (this->_val >> this->_bits);
}

float Fixed::toFloat() const {
	return ((float)this->_val / (float)(1 << this->_bits));
}

int Fixed::getRawBits() const {
	return this->_val;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	if (this != &rhs)
		this->_val = rhs._val;
	return *this;
}

bool Fixed::operator==(Fixed const & rhs) const {
	if (this->_val == rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const & rhs) const {
	if (this->_val != rhs.getRawBits())
		return true;
	return false;	
}

bool Fixed::operator<=(Fixed const & rhs) const {
	if (this->_val <= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const & rhs) const {
	if (this->_val >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(Fixed const & rhs) const {
	if (this->_val <= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(Fixed const & rhs) const {
	if (this->_val > rhs.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator*(Fixed const & rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator+(Fixed const & rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++() {
	Fixed tmp;
	tmp._val = ++_val;
	return tmp;
}

Fixed Fixed::operator++(int) {
	Fixed tmp;
	tmp._val = _val++;
	return tmp;
}

Fixed Fixed::operator--() {
	Fixed tmp;
	tmp._val = --_val;
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp;
	tmp._val = _val--;
	return tmp;
}

void Fixed::setRawBits(int const raw) {
	this->_val = raw;
	return ;
}

float Fixed::min(Fixed & a, Fixed & b) {
	if (a._val < b._val)
		return a.toFloat();
	return b.toFloat();
}

float Fixed::max(Fixed & a, Fixed & b) {
	if ((float)a._val > (float)b._val)
		return a.toFloat();
	return b.toFloat();
}

float Fixed::min(const Fixed & a, const Fixed & b) {
	if (a._val < b._val)
		return a.toFloat();
	return b.toFloat();
}

float Fixed::max(const Fixed & a, const Fixed & b) {
	if (a._val > b._val)
		return a.toFloat();
	return b.toFloat();
}


std::ostream & operator<<(std::ostream & out, const Fixed & f) {
	out << f.toFloat();
	return out;
} 