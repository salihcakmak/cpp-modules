#include "Zombie.h"

int main()
{
    Zombie *zombie = newZombie("MasterClass");
    zombie->announce();

    randomChump("Kuttapp");
    delete zombie;
}