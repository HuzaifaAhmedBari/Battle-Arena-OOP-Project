#pragma once

#include "Player_Character.hpp"
#include "Weapon.hpp"

class Mage : public Character {
	protected:

	public:
		Mage(string name, float health, float damage, Weapon *weapon1, Weapon *weapon2) : Character(name, damage, health, weapon1, weapon2) {}
		

		void attack(Character& opponent);
		void attackWithSpecialMove(Character& opponent);
		void healing();
		void movecharacter();
		 
		~Mage() override = default;
};

