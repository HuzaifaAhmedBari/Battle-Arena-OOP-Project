#pragma once


#ifndef Player_Character_HPP
#define Player_Character_HPP

#include "imgui.h"
#include "imgui-SFML.h" 
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "Weapon.hpp"
#include "Status_Effect.hpp"

using namespace std;
using namespace sf;

class Character {
	protected:
		string name;
		float health, damage;
		int level = 1;
		string type;
		Weapon *weapon = nullptr;
		int healsUsed = 0;
		StatusEffect status = StatusEffect::None;
		int statusDuration = 0;

	public:
		Character(string name, float health, float damage, Weapon* weapon) : name(name), health(health), damage(damage), weapon(weapon) {}

		virtual void takeDamage(float damage);
		virtual void useSpecialAbility();
		virtual void healing();
		float attack(int py, int px, int ey, int ex, Direction look);
		bool movecharacter(Sprite& player_sprite, Direction& movement, vector<vector<char>>& grid, int& y, int& x);
		void useCurrentSpecialMove(Character* target);
		void displayStats() const;
		bool isAlive() const;
		void useWeaponSpecialMove(Character* target);
		void applyStatus(StatusEffect effect, int duration);
		void updateStatus();
		void sethealth(float health);
		string getname() const;
		float gethealth() const;
		float getdamage() const;

		virtual ~Character() {
			delete weapon;
		}
};
#endif
