#pragma once

#include "Weapon.hpp"

class FireStaff : public Weapon {
	protected:

	public:
		FireStaff() {}
		FireStaff(string name, float range, float damage) : Weapon(name, range, damage) {}

		void displayStats() const override;
		void useSpecialMove(Character* target) override;

		~FireStaff() {}
};

