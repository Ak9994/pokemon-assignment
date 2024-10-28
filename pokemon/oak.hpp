#include<iostream>
using namespace std;

class player;

class professorOak{
    public:
        string player_name;

    professorOak(string name);
    void Oak_intro(player &player);
    void explainquest(player &player);
    void offerchoice(player &player);

};