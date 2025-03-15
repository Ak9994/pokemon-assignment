#include<vector>
class pokemon;

namespace N_battle {

    struct grass;
    
    class wildencounter {
        wildencounter();
        pokemon getRandomPokemonFromGrass(const grass& Grass);
    };

}