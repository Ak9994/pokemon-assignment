#include "/include/pokemon/pokemon.hpp"
#include "/include/pokemon/pidgey.hpp"
#include <iostream>

namespace N_pokemon {
	namespace N_pokemons {
		using namespace std;

		Pidgey::Pidgey() :pokemon("pidgey", pokemon_type::normal, 100, 10) {}
		void Pidgey::attack(Moves choice,pokemon* target) { 
			pokemon::attack(choice,target); 
			if (choice.name == "GUST")
			{
				if (rand() % 100 < 20)
				{
					std::cout << "...Battle ends!\n";
					N_Battle::battlemanager::stopBattle();
					N_Utility::utility::waitforinput();
				}
		}
	}
}