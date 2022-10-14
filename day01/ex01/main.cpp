#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return zombie;
}

void randomChump(std::string name)
{
    Zombie zombie = Zombie(name);
    zombie.announce();
}

int main()
{
    int n = 2;
    int i = 0;
    Zombie *zombie = zombieHorde(n, "Zombie");
    while (i < n)
    {
        zombie[i].announce();
        i++;
    }
    delete[] zombie;
    return 0;
}