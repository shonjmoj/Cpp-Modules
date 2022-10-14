#include "Weapon.hpp"

const std::string Weapon::getType()
{
    return this->type;
}

Weapon::Weapon(std::string type): type(type){
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}