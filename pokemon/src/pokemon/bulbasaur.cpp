#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/bulbasaur.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		bulbasaur::bulbasaur():pokemon(){}
		void pokemon::attack(Moves choice, pokemon* target) {
			SelectUseMove(target);  
			if(choice.name == "VineWhip"){
				int secondhit = rand() % 2;

				if (secondhit == 1) {
					pokemon::attack(choice, target);
					std::cout << name << " hits again with a second " << choice.name << "!\n";
				}
				else
					std::cout << target->name << " second hit missed !\n";
			}
		}
}