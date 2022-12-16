#ifndef _HARL_H_
#define _HARL_H_

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Harl {
public:
    void complain( std::string level );

private:
    void debug();
    void info();
    void warning();
    void error();
};

#endif
