#pragma once
#include "/include/pokemon/pokemon.hpp"

namespace N_pokemon {
	namespace N_pokemons {

		class Pidgey::public pokemon {
		public:
			Pidgey();
			void attack(pokemon& target);
			void wingAttack(pokemon& target);
		};
	}
}


