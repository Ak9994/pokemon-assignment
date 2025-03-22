#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/caterpie.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Caterpie::Caterpie() :pokemon() {}
		void Caterpie::attack(Moves choice, pokemon* target) {
			pokemon::attack(choice,target);
			if (choice.name == "STICKY WEB")
			{
				int reducedDamage = 5;
				target->reduceAttackPower(reducedDamage);
				std::cout << target->name << "'s next attack will be reduced by " << reducedDamage << " damage!\n";
			}
		}

}