#include "Zombie.h"

int main()
{
    Zombie zombie;
    Zombie *zptr = zombie.zombieHorde(5,"Fusion");
    for (int i = 0; i < 5; ++i) {
        zptr[i].announce();
    }
    delete[] zptr;
}