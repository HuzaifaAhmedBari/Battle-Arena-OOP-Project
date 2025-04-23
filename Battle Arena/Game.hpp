#pragma once

#ifndef Game_HPP
#define Game_HPP

#include "imgui.h"
#include "imgui-SFML.h"

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

enum GameState {
    Start,
    Select
};

class Game
{
    public:
        void run();
};

#endif