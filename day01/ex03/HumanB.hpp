#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    Weapon *weapon;
    std::string name;

public:
    HumanB(const std::string name);
    ~HumanB();

    const std::string getName();
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif