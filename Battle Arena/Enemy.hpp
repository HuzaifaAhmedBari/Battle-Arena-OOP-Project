#pragma once

#ifndef Enemy_HPP
#define Enemy_HPP

#include "Player_Character.hpp"

#include "imgui.h"
#include "imgui-SFML.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace std;

class Enemy {
    protected:
        string name;
        string type;
        string weaponName;
        float health;
        float damage;
        int specialUsesLeft = 2;
        int level = 1;
        int healsUsed = 0;

    public:
    Enemy(string name, string type, string weaponName, float health, float damage, int level = 1) : name(name), type(type), weaponName(weaponName), health(health), damage(damage), level(level) {}

        virtual float attack(int py, int px, int ey, int ex);
        virtual void useSpecial(Character* target);
        virtual void heal();
        virtual bool move(Sprite &goblin_sprite, vector<vector<char>> &grid, int &y, int &x, int &py, int &px);
        virtual void displayStats() const;
        virtual bool isAlive() const;
        void takeDamage(float damageTaken);

        virtual void decideAction(Character* target) = 0;

        virtual ~Enemy() = default;
};

#endif