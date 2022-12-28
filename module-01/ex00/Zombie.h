#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Zombie {
public:
    Zombie();
    Zombie(string name);
    ~Zombie();
    void announce(void);
    void setName(string name);

private:
    string _name;
};

Zombie* newZombie(string name);
void randomChump(string name);

#endif
