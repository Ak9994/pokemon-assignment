#include<iostream>
using namespace std;

int main(){
    string player_name;
    int select;
    
    //start
    cout << "you are entering the world of pokemon , please enter your name:" << player_name << endl;

    cout << Professor Oak here , Welcome " << player_name << "And what a nice name!" << "\n" << "let me hand you ur first pokemon" << "\n";

    //select
	cout << "You can choose one of the following Pokémon:" << "\n";
	cout << "1. Treecko \n  2. Torchic \n 3. Mudkip \n";
	cout << "Which Pokémon would you like to choose? Enter the number: ";
    cin >> select;

    //Choice
	switch(select){
		case 1: { cout << "Treecko , is a grass type pokemon"; break; }
		case 2: { cout << "Torchic , is a fire & Fighting type pokemon"; break; }
		case 3: { cout << "Mudkip , is a water and ground time"; break; }
		default: { cout << "Pikachu , is the default selection"; }


    return 0;
}

