#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/pikachu.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Pikachu::Pikachu():pokemon() {}

		void Pikachu::attack(Moves choice,pokemon* target) { 
            if (choice.name == "THUNDER BOLT")
            {
                if (rand() % 100 < 80)
                {
                    pokemon::attack(selectedMove, target);
                    std::cout << "... Hit successfully!\n";
                }
                else
                    std::cout << "... missed!\n";
            }
            else
                pokemon::attack(choice, target);
        }
	}
}