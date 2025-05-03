#include "Enemy.hpp"

float Enemy::attack(int py, int px, int ey, int ex) {
    return 0.f;
}

void Enemy::takeDamage(float damageTaken) {
    health = health - damageTaken;
}

void Enemy::useSpecial(Character* target) {
   if (specialUsesLeft <= 0) {
       std::cout << name << " tried to use a special move, but has none left.\n";
       return;
   }

   std::cout << name << " uses a special move with " << weaponName << "! It's devastating!\n";
   target->takeDamage(damage * 1.5); // 1.5x damage for special
   specialUsesLeft--;
}

void Enemy::heal() {
   if (healsUsed >= level) {
       std::cout << name << " has used all of their heals!\n";
       return;
   }

   float healAmount = 15;
   health += healAmount;
   healsUsed++;

   cout << name << " heals for " << healAmount << " HP. (" << healsUsed << "/" << level << " heals used)\n";
}

bool Enemy::move(Sprite& goblin_sprite, vector<vector<char>>& grid, int& y, int& x, int& py, int& px) {
    int gridHeight = grid.size();
    int gridWidth = grid[0].size();
	grid[y][x] = ' ';

    if (px == gridWidth - 1 && py == gridHeight - 1 && x == px && y == py) {
        if (x > 0 && grid[y][x - 1] != 'P') {
            x--;
            goblin_sprite.move({ -90.f, 0.f });
        }
        else if (y > 0 && grid[y - 1][x] != 'P') {
            y--;
            goblin_sprite.move({ 0.f, -78.f });
        }
        else if (x < gridWidth - 1 && grid[y][x + 1] != 'P') {
            x++;
            goblin_sprite.move({ 90.f, 0.f });
        }
        else if (y < gridHeight - 1 && grid[y + 1][x] != 'P') {
            y++;
            goblin_sprite.move({ 0.f, 78.f });
        }
		grid[y][x] = 'E';
        return true;
    }

    if (x == px && y == py) {
        if (x > 0 && grid[y][x - 1] != 'P') {
            x--;
            goblin_sprite.move({ -90.f, 0.f });
        }
        else if (x + 1 < gridWidth && grid[y][x + 1] != 'P') {
            x++;
            goblin_sprite.move({ 90.f, 0.f });
        }
        else if (y > 0 && grid[y - 1][x] != 'P') {
            y--;
            goblin_sprite.move({ 0.f, -78.f });
        }
        else if (y + 1 < gridHeight && grid[y + 1][x] != 'P') {
            y++;
            goblin_sprite.move({ 0.f, 78.f });
        }
        grid[y][x] = 'E';
        return true;
    }

    int dx = px - x;
    int dy = py - y;

    if (abs(dx) > abs(dy)) {
        if (dx > 0 && x + 1 < gridWidth && grid[y][x + 1] != 'P') {
            x++;
            goblin_sprite.move({ 90.f, 0.f });
        }
        else if (dx < 0 && x - 1 >= 0 && grid[y][x - 1] != 'P') {
            x--;
            goblin_sprite.move({ -90.f, 0.f });
        }
    }
    else {
        if (dy > 0 && y + 1 < gridHeight && grid[y + 1][x] != 'P') {
            y++;
            goblin_sprite.move({ 0.f, 78.f });
        }
        else if (dy < 0 && y - 1 >= 0 && grid[y - 1][x] != 'P') {
            y--;
            goblin_sprite.move({ 0.f, -78.f });
        }
    }
    grid[y][x] = 'E';
    return true;
}

void Enemy::displayStats() const {
   cout << "=== Enemy: " << name << " ===\n";
   cout << "Type: " << type << "\nHealth: " << health << "\nWeapon: " << weaponName << "\nSpecial Moves Left: " << specialUsesLeft << "\n";
}

bool Enemy::isAlive() const {
   return health > 0;
}
