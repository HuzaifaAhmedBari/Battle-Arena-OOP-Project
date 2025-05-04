#pragma once

#include "Player_Character.hpp"
#include "Weapon.hpp"

class Warrior : public Character {
	protected:

	public:
		Warrior(string name, float health, float damage, Weapon *weapon) : Character(name, health, damage, weapon) {}
		
		void attack(Character &opponent);
		void attackWithSpecialMove(Character &opponent);
		void healing();
		void moveCharacter();
		string gettype() const;

		~Warrior() override = default;
};

