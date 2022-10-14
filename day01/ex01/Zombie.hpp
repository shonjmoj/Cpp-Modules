#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    std::string name;

public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();

    std::string getName();
    void setName(std::string name);
    void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif