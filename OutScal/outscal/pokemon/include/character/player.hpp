#include "pokemontype.hpp"
#include "pokemonchoice.hpp"
#include "utility.hpp"
#include <string>


class player{
    public: 
        string name;
        pokemon chosen_pokemon;

        player();
        player(string p_name,pokemon p_chosen);

        void choose_pokemon(int choice);

};