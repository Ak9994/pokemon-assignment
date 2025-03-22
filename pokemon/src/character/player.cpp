#include "/include/pokemon/pokemon.hpp"
#include "/include/character/player.hpp"
#include "iostream"
#include <string>
using namespace N_player;
using namespace N_utility;

    //Parameter
    player::player(string p_name) { name = p_name; }
    
    //Selection
    void player::choose_pokemon(int sel)
    {
        switch((pokemon_choice)sel){
		        case pokemon_choice::charmander : { chosen_pokemon = new charmander();  break; }
		        case pokemon_choice::squirtle : { chosen_pokemon = new squirtle();   break; }
		        case pokemon_choice::bulbasaur: { chosen_pokemon = new bulbasaur();   break; }
		        default: { chosen_pokemon = new pikachu();   break;}
            }
        utility::waitforinput();
    }