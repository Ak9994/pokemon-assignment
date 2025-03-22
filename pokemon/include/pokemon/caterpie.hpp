#pragma once
#include "/include/pokemon/pokemon.hpp"

namespace N_pokemon {
	namespace N_pokemons {

		class Caterpie::public pokemon {
		public:
			Caterpie();
			void attack(Moves Choice,pokemon* target);
		};
	}
}


