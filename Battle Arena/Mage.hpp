#pragma once

#include "Player_Character.hpp"

#include <iostream>

class Mage : public Character {
	protected:

	public:
		Mage(std::string name, float health = 0.f, float damage = 0.f) : Character(name, damage, health) {}
		void attack(Character& opponent);
};

