#include "pokemon.hpp"

struct battlestate {
	pokemon *player;
	pokemon *wild;
	bool Play_turn;
	bool Ongoing;
};