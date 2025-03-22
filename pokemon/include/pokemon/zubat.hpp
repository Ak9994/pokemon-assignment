#pragma once
#include "/include/pokemon/pokemon.hpp"

namespace N_pokemon {
	namespace N_pokemons {

		class Zubat::public pokemon {
		public:
			Zubat();
			void attack(Moves choice,pokemon* target) override;
		};
	}
}


