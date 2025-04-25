#pragma once
#include "Enemy.hpp"

class Witch : public Enemy {
public:
    Witch(std::string name = "Hexa")
        : Enemy(name, "Witch", "Jadoo ki Chari", 80.f, 18.f) {}

    void decideAction(Character* target) override;
};
