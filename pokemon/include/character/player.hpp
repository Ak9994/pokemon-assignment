#include "pokemontype.hpp"
#include "pokemonchoice.hpp"
#include "utility.hpp"
#include <string>

namespace N_player {
    class player {
    public:
        string name;
        pokemon chosen_pokemon;

        player();
        player(string p_name, pokemon p_chosen);

        void choose_pokemon(int choice);

    };
}