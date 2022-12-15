#include "Zombie.h"

void Zombie::randomChump( std::string name )
{
    Zombie zombie;
    zombie.name = name;
    zombie.announce();
}