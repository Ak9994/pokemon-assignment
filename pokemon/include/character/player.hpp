#include "include/pokemon/pokemon.hpp"
#include "include/utility/utility.hpp"
#include <string>

namespace N_player {
    class player {
    public:
        string name;
        pokemon chosen_pokemon;

        player(string p_name);

        void choose_pokemon(int choice);

    };
}