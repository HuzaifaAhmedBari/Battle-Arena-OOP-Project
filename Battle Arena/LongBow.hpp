#pragma once

#include "Weapon.hpp"

class LongBow : public Weapon {
	protected:

	public:
		LongBow() {}
		LongBow(string name, float range, float damage) : Weapon(name,range,damage) {}

		void attack() override;
		void displayStats() const override;
		void useSpecialMove(Character* target) override;

		~LongBow() {}
};

