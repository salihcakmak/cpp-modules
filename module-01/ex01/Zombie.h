#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Zombie {
public:
    void announce(void );
    Zombie* zombieHorde( int N, std::string name );

private:
    string name;
};


#endif
