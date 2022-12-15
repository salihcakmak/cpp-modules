#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Zombie {
public:
void announce(void );
Zombie* newZombie( std::string name );
void randomChump( std::string name );
private:
    string name;
};


#endif //CPP_MODULES_ZOMBIE_H
