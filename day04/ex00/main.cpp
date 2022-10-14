#include "Cat.hpp"
#include "Dog.hpp"

class WrongAnimal {
	protected:
		std::string type;
	public :
		WrongAnimal() {
			std::cout << "[WRONGANIMAL] : constructor called\n";
		}
		WrongAnimal(const std::string name) {
			std::cout << "[WRONGANIMAL]  : " << name << " constructor called\n";
		}
		WrongAnimal(const WrongAnimal & copy);
		
		std::string getType() const {
			return this->type;
		}
		~WrongAnimal() {
			std::cout << "[WRONGANIMAL] : destructor called\n";
		}
		void makeSound() const {
			std::cout << "*WRONG ANIMAL SOUND*\n";
		}
};

class WrongCat : public WrongAnimal {
	public :
		WrongCat() {
			std::cout << "[WRONGCAT] : constructor called\n";
		}
		WrongCat(const std::string name) {
			std::cout << "[WRONGCAT] :" << name <<  " constructor called\n";
		}
		WrongCat(const WrongCat & copy);
		
		std::string getType() const {
			return this->type;
		}
		~WrongCat() {
			std::cout << "[WRONGCAT] : destructor called\n";
		}
		void makeSound() const {
			std::cout << "*WRONG CAT SOUND*\n";
		}

};


int main () {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	// std::cout << "\n--------- TEST ---------\n\n";

	// const WrongAnimal* metaa = new WrongAnimal();
	// const Animal* k = new Dog();
	// const WrongAnimal* f = new WrongCat();
	
	// std::cout << k->getType() << " " << std::endl;
	// std::cout << f->getType() << " " << std::endl;
	// f->makeSound(); //will output the cat sound!
	// k->makeSound();
	// metaa->makeSound();
	return 0;
}