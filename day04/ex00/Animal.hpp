#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

	protected :
		std::string type;

	public :
		Animal();
		Animal(const std::string name);
		Animal(Animal const & copy);
		~Animal();

		Animal & operator=(Animal & rhs);

		std::string getType() const;
		void setType(std::string type) ;

		virtual void makeSound() const;
};


#endif