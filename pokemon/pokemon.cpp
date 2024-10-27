#include "pokemon.hpp"
#include<iostream>
using namespace std;

pokemon::pokemon(){}

pokemon::pokemon(string p_name,pokemon_type p_type,int p_health){
    name = p_name;
    type = p_type;
    health = p_health;
}

pokemon::pokemon(const pokemon &p_ref){
    name = p_ref.name;
    type = p_ref.type;
    health = p_ref.health;
}

pokemon::~pokemon(){}

void pokemon::attack() {
    cout << name << " attacks with a powerful move!\n";
}