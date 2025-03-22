#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/zubat.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Zubat::Zubat():pokemon() {}
		
		void Zubat::attack(Moves choice,pokemon* target) { 
			pokemon::attack(choice,target); 
			if (choice.name == "LEECH LIFE")
			{
				// Restore 50% of the damage dealt
				this->health += choice.power * 0.5;

				// Ensure health does not exceed maxHealth
				if (this->health > this->maxHealth)
					this->health = this->maxHealth;

				std::cout << " has regained health!\n";
			}
		}
	}
}