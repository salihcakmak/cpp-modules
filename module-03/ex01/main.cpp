#include "ScavTrap.h"

int main()
{
	ScavTrap scavTrap("King");

	scavTrap.attack("Görkem");
	scavTrap.guardGate();
	scavTrap.takeDamage(3);
	scavTrap.beRepaired(11);
}