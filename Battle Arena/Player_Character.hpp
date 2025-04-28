#pragma once


#ifndef Player_Character_HPP
#define Player_Character_HPP

#include <iostream>
#include "Weapon.hpp"
#include "Status_Effect.hpp"

using namespace std;

class Character {
	protected:
		string name;
		float health,damage;
		int level = 1;
		string type;
		Weapon* weapon1 = nullptr;
		Weapon* weapon2 = nullptr;
		int healsUsed = 0;
		StatusEffect status = StatusEffect::None;
		int statusDuration = 0;

	public:
		Character(string name, float health, float damage, Weapon *weapon1, Weapon *weapon2): name(name), health(health), damage(damage), weapon1(weapon1), weapon2(weapon2) {}
		
		virtual void attack(Character *opponent);
		virtual void takeDamage(float damage);
		virtual void useSpecialAbility();
		virtual void movecharacter();
		virtual void healing();
		void useCurrentSpecialMove(Character* target);
		void displayWeaponOptions() const;
		void displayStats() const;
		bool isAlive() const;
		void useWeapon1SpecialMove(Character* target);
		void useWeapon2SpecialMove(Character* target);
		void applyStatus(StatusEffect effect, int duration);
		void updateStatus();
		void sethealth(float health);
		string getname() const;
		float gethealth() const;
		float getdamage() const;

		virtual ~Character() {
			delete weapon1;
			delete weapon2;
		}
};
#endif
