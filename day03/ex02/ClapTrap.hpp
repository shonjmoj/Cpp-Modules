#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

	public :
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(ClapTrap const & copy);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const & rhs);

		std::string getName();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
		unsigned int getAttackDamage(void);
		
		void setName(const std::string name);
		void setHitPoints(unsigned int amount);
		void setEnergyPoints(unsigned int amount);
		void setAttackDamage(unsigned int amount);

		virtual void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif