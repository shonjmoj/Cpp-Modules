#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	std::string name;

	public:
		Zombie(std::string name);
		~Zombie();
	
		std::string getName();
		void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif