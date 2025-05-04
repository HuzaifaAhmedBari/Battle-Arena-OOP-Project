#pragma once

#include "Player_Character.hpp"
#include "Weapon.hpp"

class Mage : public Character {
	protected:

	public:
		Mage(string name, float health, float damage, Weapon *weapon) : Character(name, health, damage, weapon) {}
		

		void attack(Character& opponent);
		void attackWithSpecialMove(Character& opponent);
		void healing();
		void movecharacter();
		string gettype() const;
		 
		~Mage() override = default;
};

