#include "include/character/player.hpp"
#include "include/character/oak.hpp"
#include "include/utility/utlity.hpp"
#include "include/main/game.hpp"
#include "include/pokemon/pokemonchoice.hpp"
#include "include/pokemon/pokemontype.hpp"
#include <iostream>
#include <string>

using namespace N_character;
using namespace N_player

int main(){

    professorOak* professor = new professorOak("Professor Oak");
    N_player::player* Player = new N_player::player();

    professor->Oak_intro(Player);

    professor->explainquest(Player);

    professor->offerchoice(Player);

    //Main game
    N_main::game Game = new N_main::game();

    Game->gameloop(Player);

    //Delete
    delete(professor);
    delete(Player);
    delete(Game);
    

    return 0;
}