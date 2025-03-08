#include "grass.hpp"
#include "wildencounter.hpp"
#include "pokemon.hpp"
#include <cstdlib>
#include <ctime>

wildencounter::wildencounter(){  srand(time(0)); }

pokemon wildencounter::getRandomPokemonFromGrass(const grass &Grass){
    int randomIndex = rand() % Grass.wildpokemonlist.size();
    return Grass.wildpokemonlist[randomIndex];
}

