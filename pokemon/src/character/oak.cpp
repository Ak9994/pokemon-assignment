#include "/include/character/oak.hpp"
#include "/include/character/player.hpp"
#include "/include/utility/utility.hpp"
#include<iostream>
using namespace std;
using namespace N_character;
using namespace N_utility;
using namespace N_player;

N_character::professorOak(string p_name){ player_name = p_name; }

void N_character::Oak_intro(player &player){
        cout << "Professor Oak here , Welcome "<< endl;
        getline(cin,player_name);
		N_utility::waitforinput();
        cout << "you are entering the world of pokemon , please enter your name:" << player_name << "And what a nice name!" 
													                    << "\n" << "let me hand you ur first pokemon" << "\n";
}

void N_character::offerchoice(player &player){
        //select
            cout << player.name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!" << endl;
		    N_utility::waitforinput();
            cout << "Treecko, is a grass type pokemon! easy choice as a starter" << endl;
            N_utility::waitforinput();
            cout << "Torchic , is a fire & Fighting type pokemon! Good Choice for mildly experienced trainers" << endl;
            N_utility::waitforinput();
            cout << "Mudkip , is a water & ground type! Good Choice for starters" << endl;
        //Choice
            int choice;
            cout << "You can choose one of the following Pokémon:" << "\n";
		    cout << "1. Treecko \n  2. Torchic \n 3. Mudkip \n";
            cin >> choice;

            player.choose_pokemon(choice);
            N_utility::waitforinput();
}

void N_character::explainquest(player &player){
            
            cout << "Professor Oak: Oak-ay" << player.name << "!, I am about to explain you about your upcoming grand adventure. \n";
            N_utility::waitforinput();
            cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck! \n";
            N_utility::waitforinput();
            cout << "Professor Oak: Your mission, should you choose to accept it and trust me," << "you really don’t have a choice is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
            N_utility::waitforinput();
            cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokémon game out there... \n";
            N_utility::waitforinput();
            cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name << "! This is serious business! \n";
            N_utility::waitforinput();
            cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
            N_utility::waitforinput();
            cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << endl;
            N_utility::waitforinput();
            cout << "\n" << player.name << ": Sounds like a walk in the park... right?" << endl;
            N_utility::waitforinput();
            cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one." << endl;
            N_utility::waitforinput();
            cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?" << endl;
            N_utility::waitforinput();
            cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!" << endl;
            N_utility::waitforinput();
            cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins..." << endl;
            N_utility::waitforinput();
            cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
}