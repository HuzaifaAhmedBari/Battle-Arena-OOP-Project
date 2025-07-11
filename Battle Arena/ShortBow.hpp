#pragma once

#include "Weapon.hpp"

class ShortBow : public Weapon {
	protected:

	public:
		ShortBow() {}
		ShortBow(string name, float range, float damage) : Weapon(name, range, damage) {}

		float attack(int py, int px, int ey, int ex, Direction look) override;
		void displayStats() const override;
		void useSpecialMove(Character* target) override;


		~ShortBow() {}
};

