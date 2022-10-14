#include "ScavTrap.hpp"


int main() {
	ScavTrap mehdi("mehdi");
	ScavTrap mitirix("mitirix");
	mehdi.attack("mitirix");
	mitirix.takeDamage(mehdi.getAttackDamage());
	mitirix.beRepaired(5);
	return 0;
}