#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/charmander.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		charmander::charmander():pokemon() {}
		void charmander::attack(Moves choice, pokemon* target) {
			pokemon::attack(choice,target); 
			if (choice.name == "BLAZING CHARGE") {
				this->takedamage(10);
				std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
				N_Utility::utility::waitforinput();
			}
		}

	}
}