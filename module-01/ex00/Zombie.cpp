#include "Zombie.h"

Zombie::Zombie(){
    this->_name = "Default Name";
}

Zombie::Zombie(std::string name) {
    if (!name.empty())
        _name = name;
}

Zombie::~Zombie(){
    cout << "Destructor executed for " << this->_name << endl;
}


void Zombie::announce() {
    if (_name.empty())
        cout << "Sory I dont write this name because is empty!!!" << endl;
    else
        cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(std::string name) {
    _name = name;
}