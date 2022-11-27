#include "MessageAndColor.h"

MessageAndColor::MessageAndColor() {
    this->_resetColor = "\033[0m";
    this->_redColor = "\033[1;31m";
    this->_greenColor = "\033[1;32m";
    this->_magentaColor = "\033[1;35m";
}

string MessageAndColor::getResetColor() {
    return this->_resetColor;
}

string MessageAndColor::getRedColor() {
    return this->_redColor;
}

string MessageAndColor::getGreenColor() {
    return this->_greenColor;
}

string MessageAndColor::getMagentaColor() {
    return this->_magentaColor;
}

void MessageAndColor::guidelineMessage() {
    cout << "________________________________________________________________" << endl;
    cout << "Welcome to the PhoneBook App !!!" << endl;
    cout << "This guideline has been prepared to serve you better. Includes ADD SEARCH EXIT commands. \nThe description is as follows." << endl;
    cout << _greenColor << "ADD     :" << _resetColor << " save a new contact" << endl;
    cout << "The new person enters their information into the field one by one. \nAdds the contact to the phone book after filling in all the fields." << endl;
    cout << _greenColor << "SEARCH  :" << _resetColor << " display a specific contact" << endl;
    cout << "Displays registered contacts in a 4-column list" << endl;
    cout << _greenColor << "EXIT    :" << _resetColor << " exit PhoneBook App" << endl;
    cout << "________________________________________________________________" << endl;
}