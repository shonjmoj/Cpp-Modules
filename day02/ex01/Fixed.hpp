#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	
	int _val;
	int const static _bits = 8;

	public :
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(Fixed const & copy);
		~Fixed();

		Fixed & operator=(Fixed const & rhs);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);

		int toInt(void) const;
		float toFloat(void) const;

};

std::ostream & operator<<(std::ostream & o, const Fixed & f);

#endif