#pragma once

#include "Player_Character.hpp"
#include "FireStaff.hpp"
#include "IceStaff.hpp"
#include "Weapon.hpp"

class Mage : public Character {
	protected:

	public:
		Mage(string name, float health, float damage, string type) : Character(name, damage, health, type, new FireStaff()) {}
		

		void attack(Character& opponent);
		void attackWithSpecialMove(Character& opponent);
		void healing();
		void movecharacter();

		~Mage() override = default;
};

