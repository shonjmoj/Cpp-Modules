#include "ClapTrap.hpp"

int main() {
	
	ClapTrap mehdi("mehdi");
	ClapTrap mitirix("mitirix");
	mitirix.attack(mehdi.getName());
	mehdi.takeDamage(mitirix.getAttackDamage());
	mitirix.attack(mehdi.getName());
	mehdi.takeDamage(mitirix.getAttackDamage());
	return 0;
}