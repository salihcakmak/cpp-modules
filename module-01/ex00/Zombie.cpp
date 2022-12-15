#include "Zombie.h"

void Zombie::announce() {
    if (name.empty())
        cout << "Sory I dont write this name because is empty!!!" << endl;
    else
        cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}