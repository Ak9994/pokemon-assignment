#include<string>
#include<vector>
#include "pokemontype.hpp"
#include "include/battle/move.hpp"
#include "include/StatusEffect/IStatusEffect.hpp"
#include "include/StatusEffect/StatusEffectType.hpp"
using namespace std;

namespace N_pokemon {

    struct Moves;
    enum class pokemon_type;
    enum class statusEffects;

    class pokemon {

        public:
            string name;
            pokemon_type type;
            int health;
            int maxHP;
            int AtkPwr;
            vector<move> Moves;
            IStatusEffect* appliedEffect;

            //Constructor
            pokemon();
            pokemon(std::string name,pokemon_type P_Type,int health,vector<move> skill);
            pokemon(pokemon* other);
            ~pokemon();
            //Battle loop
            virtual void attack(Moves choice,pokemon* target);
            void takedamage(int dmg);
            bool isfaint();
            void battleloop(pokemon* trainer_pokemon, pokemon* wild_pokemon);
            void heal();
            //Move Selection
            void PrintAvailableMoves();
            void SelectMove();
            void UseMove(Moves Sel,pokemon* target);
            void SelectUseMove(pokemon* target);
            //Status Effects
            bool canAttack();
            void applyEffect(statusEffects effectToApply);
            void clearEffect();
            bool canApplyEffect();
            void reduceAttack(int reduceddmg);

            
    };
}