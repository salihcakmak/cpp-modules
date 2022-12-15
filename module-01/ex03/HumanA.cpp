#include "HumanA.h"

HumanA::HumanA(string name, Weapon &weapon) {
    _name = name;
    _weapon = &weapon;
}

void HumanA::attack() {
    if (_weapon == NULL)
        return;
    cout << _name << " attacks with their " << _weapon->getType() << endl;
}
