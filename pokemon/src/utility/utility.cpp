#include "/include/utility/utility.hpp"
#include <iostream>
#include <limits>

namespace N_utility;
using namespace std;

    void N_utility::clearConsole()
    {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    }

    void N_utility::waitforinput()
    {
        cin.get();
    }

    void N_utility::clearInputBuffer()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}


