#pragma once

#include "Player_Character.hpp"
#include "Weapon.hpp"

class Warrior : public Character {
	protected:

	public:
		Warrior(string name, float health, float damage, Weapon *weapon1, Weapon *weapon2) : Character(name, health, damage, weapon1, weapon2) {}
		
		void attack(Character &opponent);
		void attackWithSpecialMove(Character &opponent);
		void healing();
		void moveCharacter();

		~Warrior() override = default;
};

