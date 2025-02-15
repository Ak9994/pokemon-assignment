#include "/include/main/game.hpp"
#include "/include/character/player.hpp"
#include "/include/pokemon/pokemontype.hpp"
#include "/include/utility/utility.hpp"
#include "/include/battle/wildencounter.hpp"
#include<iostream>

using namespace std;

game::game(){
    ForestGrass = { "forest",
    {{"Zubat",pokemon_type::poison,40},
     {"Caterpie",pokemon_type::poison,50},
     {"Pidgey",pokemon_type::normal,40}},
       80 };
}

void game::gameloop(player &Player){
            int choice;
            bool keepPlaying = true;
            
            while(keepPlaying){
                cout << "\n What would you like to do next, " << Player.name << "?\n";
	            cout << "1. Battle Wild Pokémon\n";
	            cout << "2. Visit PokeCenter\n";
	            cout << "3. Challenge Gyms\n";
	            cout << "4. Enter Pokémon League\n";
	            cout << "5. Quit\n";
	            cout << "Enter your choice: ";
	            cin >> choice;

                switch(choice){
                    case 1: { wildencounter encounter; 
                              pokemon encountered_pokemon = encounter.getRandomPokemonFromGrass(ForestGrass);
                              cout << "A Wild" << encountered_pokemon.name << "appears!!! \n";
                              break; }
                    case 2: { cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now! \n"; break; }
                    case 3: { cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break! \n"; break; }
                    case 4: { cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!' \n"; break; }
                    case 5: { cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!' \n"; 
                              char quit;
                              cout << "Are you sure you want to quit! (Y/N)" << endl;
                              cin >> quit;


                              break; }
                    default: { cout << "Please select right choice"; break; }
                }
                utility::waitforinput();
                //exit loop
                cout << "saving game now , Please dont turn off the power" << Player.name << "Cya around :) " << "\n" ;
            }
        }


