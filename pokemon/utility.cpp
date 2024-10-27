#include "utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

void utility :: clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void utility :: waitForEnter() {
    cin.get();
}

void utility :: clearInputBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}