#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/pidgey.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Pidgey::Pidgey() :pokemon("pidgey", pokemon_type::normal, 100, 10) {}

		void Pidgey::attack(pokemon* target) {

			int atkdamage;

			cout << name << " attacks with a move! , which dealt:" << atkdamage << "dmg\n";

			target->takedamage(atkdamage);
		}

		void Pidgey::wingAttack(pokemon* target) {
			cout << name << "has hit" << target->name << "with WingAttack! , dealing" << target->takedamage(20) << "\n";
		}
	}
}