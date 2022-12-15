#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "HI THIS IS BRAIN";
    string &strRef = str;
    string *strPtr = &str;


    cout << "address of str     : "<< &str << endl;
    cout << "address of strPtr  : "<< strPtr << endl;
    cout << "address of strRef  : "<< &strRef << endl;
    cout << "-----------------------------------" << endl;
    cout << "value of str       : "<< str << endl;
    cout << "value of strPtr    : "<< *strPtr << endl;
    cout << "value of strRef    : "<< strRef << endl;

}