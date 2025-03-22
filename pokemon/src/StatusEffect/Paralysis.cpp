#include "include/StatusEffect/Paralysis.hpp"
#include "include/pokemon/pokemon.hpp"
#include<iostream>


namespace N_pokemon {
    namespace N_status {

        void Paralysis::applyEffect(Pokemon* target) {
            std::cout << target->name << " is paralyzed! It may not be able to move!\n";
            turnsLeft = rand() % 3 + 1;
        }

        void Paralysis::getEffectName() {
            return "Paralyzed!!!";
        }

        void Paralysis::clearEffect(Pokemon* target) {
            std::cout << target->name << " is no longer paralyzed!\n";
            target->clearEffect();
        }

        bool Paralysis::turnEndEffect(Pokemon* target) {
            if (turnsLeft <= 0) { clearEffect(target); return true; }
            turnsLeft--;

            int paralysisChance = rand() % 4;

            if (paralysisChance == 0)
            {
                std::cout << target->name << " is paralyzed! It can't move!\n";
                return false;
            }

            std::cout << target->name << " can move! and able to attack! \n";
            return true;
        }
    }
}