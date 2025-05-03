#pragma once
#include "Enemy.hpp"

class Witch : public Enemy {
    public:
        Witch(std::string name = "Hexa") : Enemy(name, "Witch", "Jadoo ki Chari", 100.f, 30.f) {}

        float attack(int py, int px, int ey, int ex);
	    bool move(Sprite& goblin_sprite, vector<vector<char>>& grid, int& y, int& x, int& py, int& px) override;

        void decideAction(Character* target) override;
};
