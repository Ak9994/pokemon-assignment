#pragma once
#include "/include/pokemon/pokemon.hpp"

namespace N_pokemon {
	namespace N_pokemons {

		class bulbasaur::public pokemon {
		public:
			bulbasaur();
			void attack(pokemon* target) override;
		}
}


