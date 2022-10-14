#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &type): weapon(type), name(name){
}

HumanA::~HumanA(){}

std::string HumanA::getName()
{
    return this->name;
}

void HumanA::attack()
{
    std::cout << getName() << " attacks with their " << this->weapon.getType() << std::endl;
}