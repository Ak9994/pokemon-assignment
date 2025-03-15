#include<iostream>
using namespace std;

class player;

namespace N_character {
    class professorOak {
    public:
        string player_name;
        
        professorOak(string name);
        void Oak_intro(player& player);
        void explainquest(player& player);
        void offerchoice(player& player);

    };

}