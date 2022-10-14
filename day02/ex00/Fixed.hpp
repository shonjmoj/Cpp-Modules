#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	int _val;
	int const static _bits = 8;

	public :
		Fixed();
		Fixed(Fixed const & copy);
		~Fixed();

		Fixed & operator=(Fixed const & rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif