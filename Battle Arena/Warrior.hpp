#pragma once

#include "Player_Character.hpp"

class Warrior : public Character {
	protected:

	public:
		Warrior(std::string name, float health = 0.f, float damage = 0.f) : Character(name,damage,health) {}
		
		void attack(Character &opponent);
		void healing();
		void movecharacter();

		~Warrior() {}
};

