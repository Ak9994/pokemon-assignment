#include <iostream>
#include <string>
using namespace std;

enum class pokemon_choice{
    Treecko = 1,
	Torchic,
	Mudkip,
    pikachu
};

enum class pokemon_type {
    fire = 1,
    grass,
    water,
    electric
};

class pokemon{
    public:
        string name;
        pokemon_type type;
        int health = 100;

        void attack() {
        cout << name << " attacks with a powerful move!\n";
        }   
        //Constructor
        pokemon(){
            name = "pikachu";
            type = pokemon_type::electric;
            health = 10;
            cout << "you have selected pikachu as starter" << endl;
        }
        //Parameterized Constructor
        pokemon(string p_name,pokemon_type p_type,int p_health){
            name = p_name;
            type = p_type;
            health = p_health;
            cout << "you have selected" << name << "as starter" << endl;
        }
        //Copy Constructor
        pokemon(const pokemon &p_ref){
            name = p_ref.name;
            type = p_ref.type;
            health = p_ref.health;
            cout << "you have selected" << name << "as starter" << endl;
        }


};

class player{
    public: 
        string name;
        pokemon chosen_pokemon;
        //constructor
        player(){
            name = "Trainer";
            pokemon();
            cout << "create save under player name" << name << endl;
        }
        //Parameter
        player(string p_name,pokemon p_chosen){
            name = p_name;
            chosen_pokemon = p_chosen;
            cout << name << "has selected" << endl;
        }
        //copy
        player(const player &player_ref){
            name = player_ref.name;
            chosen_pokemon = player_ref.chosen_pokemon;
            cout << name << "has selected" << endl;
        }

        //Selection
        void choose_pokemon(int sel){
            switch((pokemon_choice)sel){
		        case pokemon_choice::Treecko :{ chosen_pokemon = pokemon("Treecko",pokemon_type::grass,100);  break; }
		        case pokemon_choice::Torchic :{ chosen_pokemon = pokemon("Torchic",pokemon_type::fire,100);   break; }
		        case pokemon_choice::Mudkip: {  chosen_pokemon = pokemon("Mudkip",pokemon_type::water,100);   break; }
		        default: { chosen_pokemon = pokemon("pikachu",pokemon_type::electric,100);   break;}}
        cout << "Player " << name << " chose " <<  chosen_pokemon.name << "\n";
        }
        
};

class professorOak{
    public:
        string player_name;

        professorOak(string name){
            player_name = name;
        }

        void Oak_intro(player &player){
            cout << "Professor Oak here , Welcome "<< endl;
		    cout << "you are entering the world of pokemon , please enter your name:" << player_name << "And what a nice name!" 
													                    << "\n" << "let me hand you ur first pokemon" << "\n";}

        void offerchoice(player &player){
        //select
            cout << player_name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";
		    cout << "Treecko, is a grass type pokemon! easy choice as a starter" << "\n";
            cout << "Torchic , is a fire & Fighting type pokemon! Good Choice for mildly experienced trainers" << "\n";
            cout << "Mudkip , is a water & ground type! Good Choice for starters";
        //Choice
            int choice;
            cout << "You can choose one of the following Pokémon:" << "\n";
		    cout << "1. Treecko \n  2. Torchic \n 3. Mudkip \n";
            cin >> choice;

            player.choose_pokemon(choice);

        }
            
};

int main(){
    pokemon Grass_starter,Fire_starter,Water_starter;
    pokemon default_starter;

    Grass_starter = pokemon("Treecko",pokemon_type::grass,10);
    Fire_starter = pokemon("Torchic",pokemon_type::fire,10);
    Water_starter = pokemon("Mudkip",pokemon_type::water,10);

    cout << "Stats are:" << "\n";
    //Default starter
    cout << "Name:" << default_starter.name << "\n Type:" << (int)default_starter.type << "\n health:" << (int)default_starter.health << "\n";
    //Grass starter
    cout << "Name:" << Grass_starter.name << "\n Type:" << (int)Grass_starter.type << "\n health:" << (int)Grass_starter.health << "\n";
    //Fire starter
    cout << "Name:" << Fire_starter.name << "\n Type:" << (int)Fire_starter.type << "\n health:" << (int)Fire_starter.health << "\n";
    //Water starter
    cout << "Name:" << Water_starter.name << "\n Type:" << (int)Water_starter.type << "\n health:" << (int)Water_starter.health << "\n";


}
