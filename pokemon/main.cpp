#include<iostream>
using namespace std;

int main(){
    string player_name,pokemon;
    int select;
    
    //start
    cout << "you are entering the world of pokemon , please enter your name:" << player_name << endl;

    cout << "Professor Oak here , Welcome " << player_name << "And what a nice name!" << "\n" << "let me hand you ur first pokemon" << "\n";

    //select
	cout << "You can choose one of the following Pokémon:" << "\n";
	cout << "1. Treecko \n  2. Torchic \n 3. Mudkip \n";
	cout << "Which Pokémon would you like to choose? Make your choice: ";
    cin >> select;

    //Choice
	switch(select){
		case 1: { pokemon = "Treecko"; 
			  cout << pokemon << ", is a grass type pokemon! easy choice as a starter"; 
			  break; }
		case 2: { pokemon = "Torchic";
			  cout << pokemon << ", is a fire & Fighting type pokemon! Good Choice for mildly experienced trainers"; 
			  break; }
		case 3: { pokemon = "Mudkip";
			  cout << pokemon << ", is a water & ground type! Good Choice for starters"; 
			  break; }
		default: { cout << "guess u are late & no starters are left , Just kidding ;) there is one left" << "\n";
			   pokemon = "pikachu";
			   cout << pokemon << ", an electric type & This is hard starter to choose from"; 
			   break;
			 }


    return 0;
}

