#include "pokemon.hpp"
#include<string>
#include<vector>
using namespace std;

struct grass{
    string environment;
    vector<pokemon> wildpokemonlist;
    int encounter;
};

grass ForestGrass = {
    "cave",{{"Zubat",pokemon_type::poison,40},{"Caterpie",pokemon_type::poison,50},{"Pidgey",pokemon_type::normal,40}},80
};