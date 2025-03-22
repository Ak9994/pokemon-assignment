#include "include/pokemon/pokemon.hpp"
#include "include/pokemon/pikachu.hpp"
#include "include/battle/"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Pikachu::Pikachu():pokemon(Pokemon("Pikachu", PokemonType::electric, 100,
                    Move("THUNDER SHOCK", 20),
                    Move("QUICK ATTACK", 10),
                    Move("THUNDER BOLT", 80) ) { }

		void Pikachu::attack(Moves choice,pokemon* target) { 
            if (choice.name == "THUNDER SHOCK")
            {
                if (rand() % 100 < 80)
                {
                    pokemon::attack(selectedMove, target);
                    std::cout << "... Hit successfully!\n";
                }
                else
                    std::cout << "... missed!\n";
            }
            else if (choice.name == "THUNDER SHOCK") {
                if (target->canApplyEffect())
                    target->applyEffect(StatusEffectType::Paralysis);
            }
            else
                pokemon::attack(choice, target);
        }
	}
}