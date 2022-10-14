#include "Zombie.hpp"

std::string Zombie::getName()
{
    return this->name;
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
