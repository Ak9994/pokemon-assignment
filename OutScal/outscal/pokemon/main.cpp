#include "game.hpp"
#include "player.hpp"
#include "pokemonchoice.hpp"
#include "pokemontype.hpp"
#include "oak.hpp"
#include "utility.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(){
    professorOak professor("Professor Oak");
    player Player;

    professor.Oak_intro(Player);
    professor.offerchoice(Player);
    professor.explainquest(Player);

    game Game;
    Game.gameloop(Player);

}