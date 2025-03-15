#include "/include/battle/wildencounter.hpp"
#include "/include/pokemon/grass.hpp"
#include "/include/pokemon/pokemon.hpp"
#include <cstdlib>
#include <ctime>
using namespace N_battle;
using namespace N_pokemon;

pokemon::wildencounter(){  srand(time(0)); }

pokemon pokemon::getRandomPokemonFromGrass(const grass &Grass){
    int randomIndex = rand() % Grass.wildpokemonlist.size();
    return Grass.wildpokemonlist[randomIndex];
}

