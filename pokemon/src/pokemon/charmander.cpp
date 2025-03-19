#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/charmander.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		charmander::charmander() :pokemon("charmander", pokemon_type::fire, 100, 10) {}

		
	}
}