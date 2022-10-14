#include "FragTrap.hpp"

int main() {
	
	FragTrap mehdi("mehdi");
	FragTrap mitirix("mitirix");
	mitirix = mehdi;
	mitirix.attack(mehdi.getName());
	mehdi.takeDamage(mitirix.getAttackDamage());
	mitirix.attack(mehdi.getName());
	mehdi.takeDamage(mitirix.getAttackDamage());
	mitirix.attack(mehdi.getName());
	mehdi.takeDamage(mitirix.getAttackDamage());
	mitirix.attack(mehdi.getName());
	mehdi.takeDamage(mitirix.getAttackDamage());
	mitirix.highFivesGuys();
	mehdi.beRepaired(40);
	mitirix.attack(mehdi.getName());
	mehdi.takeDamage(mitirix.getAttackDamage());
	return 0;
}