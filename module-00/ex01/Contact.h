#ifndef _CONTACT_H_
#define _CONTACT_H_

#include "iostream"

using std::cout;
using std::endl;
using std::string;

class Contact {
public:
    Contact();
    ~Contact();
private:
    string _firsName;
    string _lastName;
    string _nickName;
    string _phoneNumber;
    string _darkestSecret;
};

#endif
