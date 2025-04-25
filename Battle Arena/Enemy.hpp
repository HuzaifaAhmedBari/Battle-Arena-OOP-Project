#pragma once

#ifndef Enemy_HPP
#define Enemy_HPP

#include <iostream>
using namespace std;
class Character;

class Enemy {
protected:
    std::string name;
    std::string type;
    std::string weaponName;
    float health;
    float damage;
    int specialUsesLeft = 2;
    int level = 1;
    int healsUsed = 0;

public:
Enemy(std::string name, std::string type, std::string weaponName, float health, float damage, int level = 1)
: name(name), type(type), weaponName(weaponName), health(health), damage(damage), level(level) {}

    virtual void attack(Character* target);
    virtual void useSpecial(Character* target);
    virtual void heal();
    virtual void move();
    virtual void displayStats() const;
    virtual bool isAlive() const;

    virtual void decideAction(Character* target) = 0;

    virtual ~Enemy() = default;
};

#endif