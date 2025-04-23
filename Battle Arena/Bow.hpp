#pragma once

#include "Weapon.hpp"

class Bow : public Weapon {
	protected:

	public:
		Bow() {}
		Bow(string name, float range, float damage) : Weapon(name,range,damage) {}


		~Bow() {}
};

