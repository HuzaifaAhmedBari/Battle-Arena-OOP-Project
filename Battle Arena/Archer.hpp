#pragma once

#include "Player_Character.hpp"

#include "Weapon.hpp"

class Archer : public Character {
	protected:

	public:
		Archer(string name, float health, float damage, Weapon *weapon): Character(name, health, damage, weapon) {}
		
		void attack(Character& opponent);
		void attackWithSpecialMove(Character& opponent);
		void healing();
		void movecharacter();
		 

		~Archer() override = default;
};

