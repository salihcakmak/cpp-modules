#include "Zombie.h"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    if (N < 0)
        return NULL;

    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        zombies[i].name = name;
    }
    return &zombies[0];
}