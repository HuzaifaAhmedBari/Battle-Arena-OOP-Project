#pragma once

#include "Player_Character.hpp"

#include <iostream>
using namespace std;

class Mage : public Character {
	protected:

	public:
		Mage(std::string name, float health = 0.f, float damage = 0.f) : Character(name, damage, health) {}
		void attack(Character& opponent);
		void healing();
		void movecharacter();
};

