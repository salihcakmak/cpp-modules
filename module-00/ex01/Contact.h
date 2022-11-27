#ifndef _CONTACT_H_
#define _CONTACT_H_

#include "iostream"

using std::cout;
using std::endl;
using std::string;

class Contact {
public:
    Contact();
    string getFirstname();
    void setFirstname(string firstName);
    string getLastName();
    void setLastName(string lastName);
    string getNickName();
    void setNickName(string nickName);
    string getPhoneNumber();
    void setPhoneNumber(string phoneNumber);
    string getDarkestSecret();
    void setDarkestSecret(string darkestSecret);
    bool getIsEmpty();
    void setIsEmpty(bool isEmpty);


private:
    string _firstName;
    string _lastName;
    string _nickName;
    string _phoneNumber;
    string _darkestSecret;
    bool _isEmpty;

};

#endif
