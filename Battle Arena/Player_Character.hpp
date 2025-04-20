#pragma once

#ifndef Player_Character_HPP
#define Player_Character_HPP

#include<iostream>

class Character {
	protected:
		std::string name;
		float health,damage;
	public:
		Character(std::string n, float health = 0.f, float damage = 0.f) : name(name), health(health), damage(damage) {}
		virtual void attack(Character& opponent) = 0;
		virtual ~Character() {}
};
#endif