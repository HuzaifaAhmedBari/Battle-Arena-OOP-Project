#pragma once


#ifndef Player_Character_HPP
#define Player_Character_HPP

#include <iostream>
#include "Weapon.hpp"

using namespace std;

class Character {
	protected:
		string name;
		float health,damage;
		int level = 1;
		string type;
		Weapon* weapon1 = nullptr;
		Weapon* weapon2 = nullptr;
		Weapon* currentWeapon = nullptr;
	public:
		Character(string n, float health, float damage, string type, Weapon* weapon1): name(n), health(health), damage(damage), type(type), weapon1(weapon1), weapon2(nullptr), currentWeapon(weapon1) {}
		
		virtual void attack(Character& opponent) = 0;
		virtual void takeDamage(float damage) = 0;
		virtual void useSpecialAbility() = 0;
		virtual void movecharacter() = 0;
		virtual void healing() = 0;
		void levelUp();
		void updateWeapons();
		void chooseWeapon();
		void unequipWeapon();
		void switchWeapon();
		void attackWithCurrentWeapon(Character* target);
		void useCurrentSpecialMove(Character* target);
		void displayWeaponOptions() const;
		void displayStats() const;
		bool isAlive() const;
		void sethealth(float health);
		string getType() const;
		string getname() const;
		float gethealth() const;
		float getdamage() const;

		virtual ~Character() {
			delete weapon1;
			delete weapon2;
			delete currentWeapon;
		}
};
#endif
