#include "Witch.hpp"
#include <cstdlib>

void Witch::decideAction(Character* target) {
    if (health < 30) {
        heal();
    } else if (specialUsesLeft > 0) {
        useSpecial(target);
    } else {
        attack(target);
    }
}

bool Witch::move(Sprite& goblin_sprite, vector<vector<char>>& grid, int& y, int& x, int& py, int& px) {
    int gridHeight = grid.size();
    int gridWidth = grid[0].size();
    grid[y][x] = ' ';

    // Step 1: If player is in the last grid cell and enemy overlaps that, move back
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

    // Step 2: If enemy overlaps player on any tile — move away
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

    // Step 3: Custom move logic

    int dx = px - x;
    int dy = py - y;

    // Custom restriction: same row, but enemy must stay at least 2 tiles away in x
    if (y == py && abs(x - px) <= 2) {
        // Too close in X while Y is same — don't move
        grid[y][x] = 'E';
        return true;
    }

    // Default chase logic
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
