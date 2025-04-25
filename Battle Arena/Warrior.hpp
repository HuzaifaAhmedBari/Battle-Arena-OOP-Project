#pragma once

#include "Player_Character.hpp"
#include "Sword.hpp"
#include "Axe.hpp"
#include "Weapon.hpp"
class Warrior : public Character {
	protected:

	public:
		Warrior(std::string name, float health = 0.f, float damage = 0.f) : Character(name, health, damage, "Warrior", new Sword()) {}
		
		void attack(Character &opponent);
		void attackWithSpecialMove(Character &opponent);
		void healing();
		void moveCharacter();

		~Warrior() override = default;
};

