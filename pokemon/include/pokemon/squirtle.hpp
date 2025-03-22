#pragma once
#include "/include/pokemon/pokemon.hpp"

namespace N_pokemon {
	namespace N_pokemons {

		class squirtle::public pokemon {
		public:
			squirtle();
			void attack(Moves choice,pokemon* target) override;
		};
	}
}


