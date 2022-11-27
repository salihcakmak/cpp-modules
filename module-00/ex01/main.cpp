#include "iostream"
#include "PhoneBook.h"
#include "MessageAndColor.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

int main(void) {

    MessageAndColor messageAndColor;
    PhoneBook       phoneBook;
    Contact         contact;
    string          command;

    messageAndColor.guidelineMessage();
    while (true) {
        cout << messageAndColor.getMagentaColor() << "mimishell >_ " << messageAndColor.getResetColor();
        getline(cin, command);
        if (command == "ADD") {
            cout << "input is ADD" << endl;
        } else if (command == "SEARCH") {
            cout << "input is SEARCH" << endl;
        } else if (command == "EXIT") {
            cout << "PhoneBook is closing" << endl;
            break;
        } else
            cout << messageAndColor.getRedColor() << "undefined command" << messageAndColor.getResetColor() << endl;
    }
}
