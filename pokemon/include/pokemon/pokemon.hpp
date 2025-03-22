#include<string>
#include<vector>
#include "pokemontype.hpp"
#include "include/battle/move.hpp"
using namespace std;

namespace N_pokemon {

    struct Moves;
    enum class pokemon_type;

    class pokemon {

        public:
            string name;
            pokemon_type type;
            int health;
            int maxHP;
            int AtkPwr;
            vector<move> Moves;

            pokemon();
            pokemon(string name,pokemon_type P_Type,int hp,int atk);
            ~pokemon();

            virtual void attack(Moves choice,pokemon* target) override;
            void takedamage(int dmg);
            bool isfaint();

            void battleloop(pokemon* trainer_pokemon, pokemon* wild_pokemon);

            void heal();

            void PrintAvailableMoves();
            void SelectMove();
            void UseMove(Moves Sel,pokemon* target);

            void SelectUseMove(pokemon* target);
            
    };
}