#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "[FragTrap] : wahed khouna is created" << std::endl;
}


FragTrap::FragTrap(const std::string name) {
	this->setName(name);
	std::cout << "[FragTrap] : " << getName() << " is created" << std::endl;
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	this->setHitPoints(100);
	return;
}

FragTrap::FragTrap(const FragTrap & copy) {
	std::cout << "[FragTrap] : " << getName() << " Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap() {
	std::cout << "[FragTrap] : Destructor called" << std::endl;
}

void FragTrap::attack(const std::string & target) {
	std::cout << "[FragTrap] : " << getName() << " attacks ";
	std::cout << target << ", causing " << getAttackDamage() << " points of damage" <<std::endl;
	
	if (getEnergyPoints() > 0)
		setEnergyPoints(getEnergyPoints() - 1);
	else
		std::cout << "[FragTrap] : " << getName() << " can't attack ! energy points : " << getEnergyPoints() << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "[FragTrap] : " << getName() << " requested a HIGH FIVES !" << std::endl;
	
}