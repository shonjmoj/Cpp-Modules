#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "[ClapTrap] : default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "[ClapTrap] : " << getName() << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy) {
	std::cout << "[ClapTrap] : " << getName() << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap() {
	std::cout << "[ClapTrap] : " << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string & target) {
	std::cout << "[ClapTrap] : " << getName() << " attacks ";
	std::cout << target << ", causing " << getAttackDamage() << " points of damage" <<std::endl;
	
	if (getEnergyPoints() > 0)
		setEnergyPoints(getEnergyPoints() - 1);
	else
		std::cout << "[ClapTrap] : " << getName() << " can't attack ! energy points : " << getEnergyPoints() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= amount) {
		std::cout << "[ClapTrap] : " << getName() << " is dead !" << std::endl;
	}
	else {
		setHitPoints(getHitPoints() - amount);
		std::cout << "[ClapTrap] : " << getName() << " damaged ! hit points : " << getHitPoints() << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoints() == 0) {
		std::cout << "[ClapTrap] : " << getName() << " can't repair !" << std::endl;
	}
	else {
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "[ClapTrap] : " << getName() << " repaired ! hit points : " << getHitPoints() << std::endl;
	}
}

std::string ClapTrap::getName() {
	return this->_name;
}

unsigned int ClapTrap::getEnergyPoints() {
	return this->_energyPoints;
}

unsigned int ClapTrap::getHitPoints() {
	return this->_hitPoints;
}

unsigned int ClapTrap::getAttackDamage() {
	return this->_attackDamage;
}

void ClapTrap::setAttackDamage(unsigned int amount) {
	this->_attackDamage = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount) {
	this->_energyPoints = amount;
}

void ClapTrap::setHitPoints(unsigned int amount) {
	this->_hitPoints = amount;
}

void ClapTrap::setName(const std::string name) {
	this->_name = name;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	setName(rhs._name);
	setAttackDamage(rhs._attackDamage);
	setEnergyPoints(rhs._energyPoints);
	setHitPoints(rhs._hitPoints);
	return *this;
}