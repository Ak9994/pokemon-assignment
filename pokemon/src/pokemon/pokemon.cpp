#include<iostream>
#include<vector>
#include "/include/pokemon/pokemon.hpp"

namespace N_pokemon {
    
    using namespace std;

    pokemon::pokemon() {
        name = "Unknown";
        type = pokemon_type::normal;
        health = 50;
        maxHP = 50;
    }

    pokemon::pokemon(std::string P_name,pokemon_type P_type, int P_health, vector<move> P_skills) {
        name = P_name;
        type = P_type;
        health = P_health;
        maxHP = P_health;
        Moves = P_skills;
        appliedEffect = nullptr;
    }

    pokemon::pokemon(pokemon* other) {
        name = other->name;
        type = other->type;
        health = other->health;
        maxHP = other->maxHP;
        Moves = other->Moves;
    }
    

    void pokemon::attack(Moves choice,pokemon* target) { target->takedamage(choice.AtkPwr); }
    
    void pokemon::takedamage(int dmg) {   health -= dmg;  if (health < 0) { health = 0; } }

    void pokemon::heal() { health = maxHP; }

    bool pokemon::isfaint() {  if (health <= 0) return true; }

    void pokemon::battleloop(pokemon* trainer_pokemon, pokemon* wild_pokemon) {
        while (!trainer_pokemon->isfaint() && !wild_pokemon->isfaint()) {
            trainer_pokemon->attack(wild_pokemon);
            if (!wild_pokemon->isfaint()) {
                wild_pokemon->attack(trainer_pokemon);
            }
        }

        if (trainer_pokemon->isfaint()) {
            cout << trainer_pokemon->name << "has fainted !!! \n";
        }
        else {
            cout << wild_pokemon->name << "has fainted. \n";
        }
    }

    void pokemon::PrintAvailableMoves() {
        cout << name << "available moves are: \n";
        for (size_t i = 0; i < Moves[i].size; i++) {
            cout << i + 1 << ":" << Moves[i].name << "(Power:" << Moves[i].AtkPwr << ") \n";
        }
    }

    void pokemon::SelectMove() {
        int choice;
        cout << "Choose a move: ";
        cin >> choice;

        while (choice < 1 || choice > static_cast<int>(Moves.size())) {
            cout << "Invalid choice. Try again: ";
            cin >> choice;
        }
        return choice;
    }

    void pokemon::UseMove(Moves Selection, pokemon* target) {
        cout << name << "has used" << Selection.Name << "\n";
        attack(Selection, target);

        N_utility::utility:waitforinput();
        cout << "....\n";
        N_utility::utility:waitforinput();

        if (target->isfaint()) {
            cout << target->name << " fainted! \n";
        else
            cout << target->name << " has HP left " << target->health << "\n";
        }
    }

    void pokemon::SelectUseMove(pokemon* target) {
        PrintAvailableMoves();

        int ch = SelectMove()
        Moves Sel = move[ch - 1];

        UseMove(Sel, target);
    }

    bool pokemon::canAttack() {  
        if (appliedEffect == nullptr)
            return true;
        else
            appliedEffect->turnEndEffect(this);
    }

    bool pokemon::canApplyEffect() {
        return appliedEffect == nullptr;
    }

    void pokemon::applyEffect(statusEffects effectToApply) {
        switch (effectToApply) {
        case StatusEffectType::Paralysis: {
            appliedEffect = new Paralysis();
            appliedEffect->applyEffect(this);
            break;
        }
        default: appliedEffect = nullptr;
        }
    }

    void pokemon::clearEffect() { appliedEffect = nullptr; }

    pokemon::~pokemon() {}
}

    
