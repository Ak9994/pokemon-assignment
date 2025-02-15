#include "/include/pokemon/pokemon.hpp"
#include "/include/character/player.hpp"
#include "iostream"
#include <string>

    player::player()
    {
        name = "Trainer";
        pokemon();
    }
    //Parameter
    player::player(string p_name,pokemon p_chosen)
    {
        name = p_name;
        chosen_pokemon = p_chosen;
    }
    //copy
    player::player(const player &player_ref)
    {
        name = player_ref.name;
        chosen_pokemon = player_ref.chosen_pokemon;
    }

    //Selection
    void player::choose_pokemon(int sel)
    {
        switch((pokemon_choice)sel){
		        case pokemon_choice::Treecko :{ chosen_pokemon = pokemon("Treecko",pokemon_type::grass,100);  break; }
		        case pokemon_choice::Torchic :{ chosen_pokemon = pokemon("Torchic",pokemon_type::fire,100);   break; }
		        case pokemon_choice::Mudkip: {  chosen_pokemon = pokemon("Mudkip",pokemon_type::water,100);   break; }
		        default: { chosen_pokemon = pokemon("pikachu",pokemon_type::electric,100);   break;}
            }
        utility::waitforinput();
    }