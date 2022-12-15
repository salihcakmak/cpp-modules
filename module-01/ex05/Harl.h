#ifndef _HARL_H_
#define _HARL_H_


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
