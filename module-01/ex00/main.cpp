#include "Zombie.h"

int main()
{
    Zombie zombie;
    zombie.randomChump("Fatih");
    Zombie *nz = zombie.newZombie("Abdülselam");

    nz->announce();
    delete nz;
}