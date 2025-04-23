#pragma once

#ifndef Weapon_Hpp
#define Weapon_Hpp

#include <iostream>
using namespace std;

class Character;

class Weapon
{
	protected:
		string name;
		float range, damage;
		float damageIncrement = 5.0f;
		int unlockLevel = 1, specialMoveUnlockLevel = 3;
		bool specialUnlocked = false;
	public:
		Weapon() {}
		Weapon(string name, float range, float damage) : name(name), range(range), damage(damage) {}

		virtual void displayStats() const;
		virtual void useSpecialMove(Character* target) = 0;
		virtual void levelUpEffect(int playerLevel);
    	bool isSpecialUnlocked() const;
    	// virtual void useSpecialMove(Character* target) override;
		string getname() const;
		float getrange() const;
		float getdamage() const;
		
		virtual ~Weapon() {}
};

#endif
