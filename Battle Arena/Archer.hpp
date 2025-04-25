#pragma once

#include "Player_Character.hpp"
#include "LongBow.hpp"
#include "ShortBow.hpp"
#include "Weapon.hpp"

class Archer : public Character {
	protected:

	public:
		Archer(string name, float health, float damage, string Type, Weapon* weapon2 = nullptr): Character(name, health, damage, Type, new LongBow()) {
			this->weapon2 = weapon2;
		}
		
		void attack(Character& opponent);
		void attackWithSpecialMove(Character& opponent);
		void healing();
		void movecharacter();

		~Archer() override = default;
};

