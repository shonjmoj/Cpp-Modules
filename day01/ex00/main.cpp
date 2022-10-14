#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("z1");
    zombie->announce();
    delete zombie;
    randomChump("z2");
    randomChump("z3");
    randomChump("z4");
    randomChump("z5");
    return 0;
}