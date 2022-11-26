#include <iostream>

using std::string;
using std::cout;
using std::endl;

void print_args_with_uppercase(int ac, char **av) {
    for (int i = 1; i < ac; ++i) {
        string data = av[i];
        for (unsigned int j = 0; j < data.length(); ++j)
            cout << (char)toupper(data[j]);
    }
    cout << endl;
}

int main(int ac, char **av) {
    if (ac > 1)
        print_args_with_uppercase(ac, av);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return (0);
}
