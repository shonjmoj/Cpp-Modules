#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog(Dog const & copy);
		~Dog();

		void makeSound() const;
};

#endif