#include "pokemon.hpp"

namespace N_battle {
	
	struct battlestate {
		pokemon* player;
		pokemon* wild;
		bool Play_turn;
		bool Ongoing;
	};
}