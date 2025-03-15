#pragma once
#include "/include/pokemon/pokemon.hpp"

namespace N_pokemon {
	namespace N_pokemons {

		class Pikachu::public pokemon {
		public:
			Pikachu();
			void attack(pokemon& target);
			void thundershock(pokemon& target);
		};
	}
}


