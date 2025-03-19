#pragma once
#include "/include/pokemon/pokemon.hpp"

namespace N_pokemon {
	namespace N_pokemons {

		class charmander::public pokemon {
		public:
			charmander();
			void attack(pokemon* target);
			void flamethrower(pokemon* target);
		};
	}
}


