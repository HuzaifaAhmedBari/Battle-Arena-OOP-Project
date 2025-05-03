#include "Witch.hpp"
#include <cstdlib>

void Witch::decideAction(Character* target) {
    /*if (health < 30) {
        heal();
    } else if (specialUsesLeft > 0) {
        useSpecial(target);
    } else {
        attack(target);
    }*/
}

float Witch::attack(int py, int px, int ey, int ex) {
    if (py == ey && abs(px - ex) <= 3)
        return damage;
    else if (px == ex && abs(py - ey) <= 3)
        return damage;
    return 0.f;
}

bool Witch::move(Sprite& goblin_sprite, vector<vector<char>>& grid, int& y, int& x, int& py, int& px) {
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

    if (y == py && abs(x - px) <= 2) {
        grid[y][x] = 'E';
        return true;
    }

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
