#pragma once

#ifndef Weapon_Hpp
#define Weapon_Hpp

#include <iostream>
using namespace std;
class Character;

enum Direction {
	Up,
	Down,
	Left,
	Right
};

class Weapon
{
	protected:
		string name;
		float range, damage;
		bool specialUnlocked = false;
		bool weapon2Unlocked = false;
		int specialUsesLeft = 0;
	public:
		Weapon() : name(" "),range(0.f), damage(0.f) {}
		Weapon(string name, float range, float damage) : name(name), range(range), damage(damage) {}

		virtual void displayStats() const;
		virtual void useSpecialMove(Character* target) = 0;
		virtual void levelUpEffect(int playerLevel);
		virtual float attack(int py, int px, int ey, int ex, Direction look);
    	bool isSpecialUnlocked() const;
		bool canUseSpecial() const;
		void reduceSpecialUse();
    	// virtual void useSpecialMove(Character* target) override;
		string getname() const;
		float getrange() const;
		float getdamage() const;
		
		virtual ~Weapon() {}
};

#endif
