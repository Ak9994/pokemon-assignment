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

void pokemon::attack(pokemon &target) {
    
    int atkdamage;

    cout << name << " attacks with a move! , which dealt:" << atkdamage << "dmg\n" ;

    target.takedamage(atkdamage);

}

void pokemon::takedamage(int dmg){
    
    health -= dmg;
    
    if(health < 0){  health = 0; }

}

bool pokemon::isfaint(){
    if(health <= 0) return true;
}

void pokemon::battleloop(pokemon &trainer_pokemon,pokemon &wild_pokemon){
    while(!trainer_pokemon.isfaint() && !wild_pokemon.isfaint()){
        trainer_pokemon.attack(wild_pokemon);
        if(!wild_pokemon.isfaint()){
            wild_pokemon.attack(trainer_pokemon);
        }
    }

    if(trainer_pokemon.isfaint()){
        cout << trainer_pokemon.name << "has fainted !!! \n";
    } else {
        cout << wild_pokemon.name << "has fainted. \n";
    }
}
