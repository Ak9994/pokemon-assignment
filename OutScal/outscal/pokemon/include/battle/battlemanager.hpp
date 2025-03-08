 #include "pokemon.hpp"
 #include "player.hpp"
 #include "battlestate.hpp"

using namespace std;

class battlemanager{
    public:
        void startbattle(player &Player, pokemon &wild_encounter);
    private:
		battlestate BattleState;
        void battle();
		void updatebattle();
        void battleoutcome();
};

void battlemanager::startbattle(player &playerpokemon, pokemon &wildpokemon) {
    BattleState.playerpokemon = &player.chosen_pokemon;
    BattleState.wildpokemon = &wildpokemon;
    BattleState.Play_turn = true;
    BattleState.Ongoing = true;

    cout << "A Wild Pokemon" << wildpokemon.name << "! , has appeared \n";
}

void battlemanager::battle() {
    while (BattleState.Ongoing) {

        if (BattleState.Play_turn) {
            BattleState.player->attack(*BattleState.wild);
        }
        else {
            BattleState.wild->attack(*BattleState.player);
        }
        
        updatebattle();

        BattleState.Play_turn = !BattleState.Play_turn

        utility::waitforinput();
    }

    battleoutcome();
}

void battlemanager::updatebattle() {
    if (BattleState.playerpokemon->isfaint()) { BattleState.Ongoing = false; }
    else if (BattleState.wildpokemon - < isfaint()) { BattleState.Ongoing = false;  }
}

void battlemanager::battleoutcome() {
    if (BattleState.playerpokemon->isfaint()) { cout << BattleState.playerpokemon->name << "has fainted , player whited out" << "\n"; }
    else { cout << BattleState.wildpokemon->name << "has fainted , gained XP" << "\n"; }
}



