#include<string>
#include "pokemontype.hpp"
using namespace std;

class pokemon{
    public:
        string name;
        pokemon_type type;
        int health;

        pokemon();
        pokemon(string p_name,pokemon_type p_type,int p_health);
        pokemon(const pokemon &p_ref);

        ~pokemon();

        void attack();
};