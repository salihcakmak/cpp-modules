#include "Zombie.h"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *zombie = new Zombie;
    zombie->name = name;
    return zombie;
}
