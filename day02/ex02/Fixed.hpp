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

		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;
		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;

		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static float min(Fixed & a, Fixed & b);
		static float min(const Fixed & a, const Fixed & b);
		static float max(Fixed & a, Fixed & b);
		static float max(const Fixed & a, const Fixed & b);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		int toInt(void) const;
		float toFloat(void) const;

};

std::ostream & operator<<(std::ostream & out, const Fixed & f);

#endif