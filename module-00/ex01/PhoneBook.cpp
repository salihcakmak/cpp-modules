#include "PhoneBook.h"
#include "iostream"
#include "iomanip"

using std::cout;
using std::endl;

PhoneBook::PhoneBook() : _index(0) {

}

void PhoneBook::addContact(Contact contact) {
    if (contact.getFirstname().empty() || contact.getLastName().empty() || contact.getNickName().empty() ||
        contact.getPhoneNumber().empty() || contact.getDarkestSecret().empty())
        cout << "Missing information found, registration could not be completed" << endl;
    else {
        _contacts[_index % 8].setFirstname(contact.getFirstname());
        _contacts[_index % 8].setLastName(contact.getLastName());
        _contacts[_index % 8].setNickName(contact.getNickName());
        _contacts[_index % 8].setPhoneNumber(contact.getPhoneNumber());
        _contacts[_index % 8].setDarkestSecret(contact.getDarkestSecret());
        _contacts[_index % 8].setIsEmpty(false);
        cout << "Registration successful" << endl;
        _index++;
    }
}


void PhoneBook::formatString(std::string str) {
    if (str.length() >= 10)
        cout << str.substr(0, 9) + "." << "|";
    else
        cout << std::setw(10) << str << "|";
}

void PhoneBook::showContacts() {
    for (int i = 0; i < 8; ++i) {
        if (_contacts[i].getIsEmpty())
            break;
        cout << std::setw(10) << i << " | ";
        formatString(_contacts[i].getFirstname());
        formatString(_contacts[i].getLastName());
        formatString(_contacts[i].getNickName());
        cout << endl;
    }
}

void PhoneBook::showContactById(int index) {
    if (_contacts[index].getIsEmpty())
        cout << "Wrong index value" << endl;
    else {
        cout << "Index :" << index << endl;
        cout << "First Name : " << _contacts[index].getFirstname() << endl;
        cout << "Last Name : " <<_contacts[index].getLastName() << endl;
        cout << "Nick Name : " <<_contacts[index].getNickName() << endl;

    }
}