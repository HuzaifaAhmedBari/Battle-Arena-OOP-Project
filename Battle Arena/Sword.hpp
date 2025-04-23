#pragma once

#include "Weapon.hpp"

class Sword : public Weapon {
	protected:

	public:
		Sword() {}
		Sword(string name, float range, float damage) : Weapon(name,range,damage) {}

		void displayStats() const override;
		void useSpecialMove(Character* target) override;

		
		~Sword() {}
};

