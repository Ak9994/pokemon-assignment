#include "include/main/game.hpp"
#include "include/pokemon/pokemon.hpp"
using namespace N_player;
using namespace N_pokemon;
using namespace N_main;

    class game {
    private:
        grass ForestGrass;
        pokemon* WildPokemon;
        
    
    public:
        N_main::game();
        void N_main::gameloop(player* Player);
        N_main::~game();
    };

