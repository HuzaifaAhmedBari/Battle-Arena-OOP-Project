#pragma once

#include "Weapon.hpp"

class IceStaff : public Weapon {
	protected:

	public:
		IceStaff() {}
		IceStaff(string name, float range, float damage) : Weapon(name,range,damage) {}


		~IceStaff() {}
};

