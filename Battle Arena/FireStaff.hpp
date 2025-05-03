#pragma once

#include "Weapon.hpp"

class FireStaff : public Weapon {
	protected:

	public:
		FireStaff() {}
		FireStaff(string name, float range, float damage) : Weapon(name, range, damage) {}

		float attack(int py, int px, int ey, int ex, Direction look) override;
		void displayStats() const override;
		void useSpecialMove(Character* target) override;

		~FireStaff() {}
};

