#include "Harl.h"

void Harl::complain(string level) {

    const char* str[4] = { "DEBUG","INFO","WARNING","ERROR" };
    int i = 0;
    while (str[i] != level && i < 4)
        i++;

    switch (i) {
        case 0:
            debug();
            cout << endl;
        case 1:
            info();
            cout << endl;
        case 2:
            warning();
            cout << endl;
        case 3:
            error();
            break;
        default:
            cout << "[ Probably complaining about insignificant problems ]" << endl;
    }
}

void Harl::debug() {
    cout << "[DEBUG]" << endl;
    cout << "Debug message" << endl;
}

void Harl::info() {
    cout << "[INFO]" << endl;
    cout << "Info message" << endl;
}

void Harl::warning() {
    cout << "[WARNING]" << endl;
    cout << "Warning message" << endl;
}

void Harl::error() {
    cout << "[ERROR]" << endl;
    cout << "Error message" << endl;
}



