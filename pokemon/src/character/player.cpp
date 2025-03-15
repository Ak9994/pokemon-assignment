#include "/include/pokemon/pokemon.hpp"
#include "/include/character/player.hpp"
#include "iostream"
#include <string>
using namespace N_player;
using namespace N_utility;

    N_player::player()
    {
        name = "Trainer";
        pokemon();
    }
    //Parameter
    N_player::player(string p_name,pokemon p_chosen)
    {
        name = p_name;
        chosen_pokemon = p_chosen;
    }
    //copy
    N_player::player(const player &player_ref)
    {
        name = player_ref.name;
        chosen_pokemon = player_ref.chosen_pokemon;
    }

    //Selection
    void N_player::choose_pokemon(int sel)
    {
        switch((pokemon_choice)sel){
		        case pokemon_choice::Treecko :{ chosen_pokemon = new treecko();  break; }
		        case pokemon_choice::Torchic :{ chosen_pokemon = new torchic();   break; }
		        case pokemon_choice::Mudkip: {  chosen_pokemon = new mudkip();   break; }
		        default: { chosen_pokemon = new pikachu();   break;}
            }
        N_utility::waitforinput();
    }