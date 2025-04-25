#pragma once

#ifndef Enemy_HPP
#define Enemy_HPP

#include <iostream>
using namespace std;

class Enemy {
	protected:
		string name;
		float health, attackpower;
	public:
		Enemy() : name(" "), health(0), attackpower(0) {}
		Enemy(string name, float health, float attackpower) : name(name), health(health), attackpower(attackpower) {}


		string getname() const ;
		float gethealth() const ;
		float getattackpower() const ;

		virtual ~Enemy();
};

#endif