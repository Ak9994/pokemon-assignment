#include<iostream>
using namespace std;

int main(){
    #include<iostream>
using namespace std;

int main(){
    string player_name;
    int select;
    

    cout << "enter name";
    cin >> player_name;
    
    //start
    cout << "adventure is starting now ," << player_name << endl;

    //select
    cout << "Welcome to the world of Pokémon!" << "\n";
	cout << "You can choose one of the following Pokémon:" << "\n";
	cout << "1. Treecko \n  2. Torchic \n 3. Mudkip \n";
	cout << "Which Pokémon would you like to choose? Enter the number: ";
    cin >> select;

    //Choice
    if( select == 1 ){ cout << "Treecko , is a grass type pokemon"; }
    else if(select == 2) { cout << "Torchic , is a fire & Fighting type pokemon"; }
    else if(select == 3) { cout << "Mudkip , is a water and ground time"; }
    else { cout << "select again"; }


    return 0;
}
}
