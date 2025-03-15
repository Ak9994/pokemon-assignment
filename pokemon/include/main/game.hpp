#include "grass.hpp"
class player;

namespace N_main {

    class game {
    private:
        grass ForestGrass;

    public:
        game();
        void gameloop(player& Player);
    };

}