#include "HumanB.hpp"

HumanB::HumanB(const std::string name) {
    this->name = name;
}

HumanB::~HumanB(){
    return;
}

const std::string HumanB::getName()
{
    return this->name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << getName() << " attacks with their " << this->weapon->getType() << std::endl;
}