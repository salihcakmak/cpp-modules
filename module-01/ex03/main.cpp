#include "HumanA.h"
#include "HumanB.h"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("test");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
        club.setType("new input");
        jim.attack();
        Weapon axe = Weapon("Blade Axe");
        jim.setWeapon(axe);
        jim.attack();
    }
    system("Leaks violence");

    return 0;
}