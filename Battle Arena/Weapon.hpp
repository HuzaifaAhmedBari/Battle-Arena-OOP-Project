#pragma once

#ifndef Weapon_Hpp
#define Weapon_Hpp

#include <iostream>
using namespace std;

class Weapon
{
	protected:
		string name;
		float range, damage;
	public:
		Weapon() {}
		Weapon(string name, float range, float damage) : name(name), range(range), damage(damage) {}

		string getname() const;
		float getrange() const;
		float getdamage() const;
		
		virtual ~Weapon() {}
};

#endif