#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_

#include "Contact.h"

class PhoneBook{
public:
    PhoneBook();
    ~PhoneBook();
private:
    Contact _contacts[8];
};

#endif
