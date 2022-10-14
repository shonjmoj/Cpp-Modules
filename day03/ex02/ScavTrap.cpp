#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) {
	this->setName(name);
	std::cout << "[ScavTrap] : " << getName() << " is created" << std::endl;
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->setHitPoints(100);
	return;
}

ScavTrap::ScavTrap(const ScavTrap & copy) {
	std::cout << "[ScavTrap] : " << getName() << " Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] : Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string & target) {
	std::cout << "[ScavTrap] : " << getName() << " attacks ";
	std::cout << target << ", causing " << getAttackDamage() << " points of damage" <<std::endl;
	
	if (getEnergyPoints() > 0)
		setEnergyPoints(getEnergyPoints() - 1);
	else
		std::cout << "[ScavTrap] : " << getName() << " can't attack ! energy points : " << getEnergyPoints() << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "[ScavTrap] : " << getName() << " Mode Gate keeper ACTIVATED !" << std::endl;
}
