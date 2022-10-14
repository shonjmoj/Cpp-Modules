#include "Zombie.hpp"

std::string Zombie::getName()
{
    return this->name;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie(void)
{
    return;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << getName() << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << getName() << " : destroyed !" << std::endl;
}
