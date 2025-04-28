#pragma once

#include "Weapon.hpp"

class Axe : public Weapon {
	protected:

	public:
		Axe() {}
		Axe(string name, float range, float damage) : Weapon(name, range, damage) {}

		void attack() override;
		void displayStats() const override;
		void useSpecialMove(Character* target) override;
				
		~Axe() {}
};

