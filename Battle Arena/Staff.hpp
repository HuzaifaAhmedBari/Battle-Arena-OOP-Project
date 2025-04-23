#pragma once

#include "Weapon.hpp"

class Staff : public Weapon {
	protected:

	public:
		Staff() {}
		Staff(string name, float range, float damage) : Weapon(name,range,damage) {}


		~Staff() {}
};

