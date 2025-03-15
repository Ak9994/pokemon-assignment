#include "pokemon.hpp"
#include<string>
#include<vector>
using namespace std;

namespace N_pokemon {

    struct grass {
        string environment;
        vector<pokemon> wildpokemonlist;
        int encounter;
    };
}
