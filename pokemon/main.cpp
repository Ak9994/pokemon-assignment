#include <iostream>
#include <string>
using namespace std;

void waitforinput(){
    cin.get();
}

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

        ~pokemon(){}
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
            getline(cin,player_name);
		    waitforinput();
            cout << "you are entering the world of pokemon , please enter your name:" << player_name << "And what a nice name!" 
													                    << "\n" << "let me hand you ur first pokemon" << "\n";}

        void explainquest(player &player){
            
            cout << "Professor Oak: Oak-ay" << player.name << "!, I am about to explain you about your upcoming grand adventure.\n";
            waitforinput();
            cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
            waitforinput();
            cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
            waitforinput();
            cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokémon game out there...\n";
            waitforinput();
            cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!\n";
            waitforinput();
            cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
            waitforinput();
            cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << endl;
            waitforinput();
            cout << "\n" << player.name << ": Sounds like a walk in the park... right?" << endl;
            waitforinput();
            cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one." << endl;
            waitforinput();
            cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?" << endl;
            waitforinput();
            cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!" << endl;
            waitforinput();
            cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins..." << endl;
            waitforinput();
            cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
        }

        void offerchoice(player &player){
        //select
            cout << player_name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!" << endl;
		    waitforinput();
            cout << "Treecko, is a grass type pokemon! easy choice as a starter" << endl;
            waitforinput();
            cout << "Torchic , is a fire & Fighting type pokemon! Good Choice for mildly experienced trainers" << endl;
            waitforinput();
            cout << "Mudkip , is a water & ground type! Good Choice for starters" << endl;
        //Choice
            int choice;
            cout << "You can choose one of the following Pokémon:" << "\n";
		    cout << "1. Treecko \n  2. Torchic \n 3. Mudkip \n";
            cin >> choice;

            player.choose_pokemon(choice);
            waitforinput();

        }
};

int main(){

    pokemon Grass_starter,Fire_starter,Water_starter;
    //pokemon default_starter;
    

    Grass_starter = pokemon("Treecko",pokemon_type::grass,10);
    Fire_starter = pokemon("Torchic",pokemon_type::fire,10);
    Water_starter = pokemon("Mudkip",pokemon_type::water,10);

    professorOak prof("Oak");
    player Player("May",Fire_starter);

    prof.Oak_intro(Player);
    prof.offerchoice(Player);
    prof.explainquest(Player);

    cout << "This Adventure is starting now" << endl;
    
    
    return 0;


}
