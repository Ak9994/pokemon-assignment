#include "grass.hpp"
class player;

class game{
    private:
        grass ForestGrass;
    
    public:
        game();
        void gameloop(player &Player);
};