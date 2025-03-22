#pragma once
#include <string>
using namespace std;

namespace N_pokemon {
	struct move {
		string name;
		int power;

		move(string& MoveName,int MovePower) {
			name = MoveName;
			power = MovePower;
		}
	};
}