#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/zubat.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Zubat::Zubat():pokemon("Zubat", pokemon_type::flying, 100, 10) {}

		void Zubat::attack(pokemon& target) {

			int atkdamage;

			cout << name << " attacks with a move! , which dealt:" << atkdamage << "dmg\n";

			target.takedamage(atkdamage);
		}

		void Zubat::Supersonic(pokemon& target) {
			cout << name << "has hit" << target.name << "with Supersonic! , dealing" << target.takedamage(20) << "\n";
		}
	}
}