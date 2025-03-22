#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/squirtle.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		squirtle::squirtle() :pokemon() {}
		void squirtle::attack(Moves choice,pokemon* target) { 
			pokemon::attack(choice,target);
            if (selectedMove.name == "RAPID SPIN")
            {
                int hit = (rand() % 4) + 2;

                for (int i = 0; i < hit; ++i) {
                    pokemon::attack(choice, target);
                }
				std::cout << "... and hit " << hits << " times! \n";
		}
	}
}