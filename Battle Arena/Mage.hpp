#pragma once

#include "Player_Character.hpp"
#include "FireStaff.hpp"
#include "IceStaff.hpp"
#include "Weapon.hpp"

class Mage : public Character {
	protected:

	public:
		Mage(std::string name, float health = 0.f, float damage = 0.f, std::string type) : Character(name, damage, health, type, new FireStaff()) {}
		
		void attack(Character& opponent);
		void healing();
		void movecharacter();

		~Mage() override = default;
};

