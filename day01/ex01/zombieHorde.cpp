#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        zombie[i].setName(name);
        i++;
    }
    return zombie;
}