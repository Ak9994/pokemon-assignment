#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/pikachu.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Pikachu::Pikachu():pokemon("pikachu", pokemon_type::electric, 100, 10) {}

		void Pikachu::attack(pokemon& target) {

			int atkdamage;

			cout << name << " attacks with a move! , which dealt:" << atkdamage << "dmg\n";

			target.takedamage(atkdamage);
		}

		void Pikachu::thundershock(pokemon& target) {
			cout << name << " has hit " << target.name << " with thundershock! , dealing " << target.takedamage(20) << "dmg. \n";
		}
	}
}