#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    Weapon &weapon;
    std::string name;

public:
    HumanA(const std::string &name, Weapon &type);
    ~HumanA();

    std::string getName();
    void attack();
};

#endif