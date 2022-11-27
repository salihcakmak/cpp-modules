#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_

#include "Contact.h"

class PhoneBook{
public:
    PhoneBook();
    void addContact(Contact contact);
    void showContacts();
    void showContactById(int index);
private:
    Contact _contacts[8];
    int _index;
    void formatString(string str);
};

#endif
