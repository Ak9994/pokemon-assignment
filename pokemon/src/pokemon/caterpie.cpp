#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/caterpie.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Caterpie::Caterpie() :pokemon("Caterpie", pokemon_type::Bug, 100, 10) {}

		void Caterpie::attack(pokemon& target) {

			int atkdamage;

			cout << name << " attacks with a move! , which dealt:" << atkdamage << "dmg\n";

			target.takedamage(atkdamage);
		}

		void Caterpie::BugBite(pokemon& target) {
			cout << name << "has hit" << target.name << "with BugBite! , dealing" << target.takedamage(20) << "\n";
		}
	}
}