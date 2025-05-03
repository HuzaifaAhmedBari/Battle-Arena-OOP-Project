#pragma once

#include "Weapon.hpp"

class Sword : public Weapon {
	protected:

	public:
		Sword() {}
		Sword(string name, float range, float damage) : Weapon(name,range,damage) {}

		float attack(int py, int px, int ey, int ex, Direction look) override;
		void displayStats() const override;
		void useSpecialMove(Character* target) override;
		
		~Sword() {}
};

