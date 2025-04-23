#pragma once

#ifndef Player_Character_HPP
#define Player_Character_HPP

#include<iostream>
using namespace std;

class Character {
	protected:
		string name;
		float health,damage;
	public:
		Character(string n, float health = 0.f, float damage = 0.f) : name(name), health(health), damage(damage) {}
		
		virtual void attack(Character& opponent) = 0;
		virtual void movecharacter() = 0;
		virtual void healing() = 0;
		
		string getname() const;
		float gethealth() const;
		float getdamage() const;
		
		virtual ~Character() {}
};
#endif