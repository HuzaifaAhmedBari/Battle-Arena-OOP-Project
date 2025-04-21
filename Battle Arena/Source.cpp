#include "imgui.h"
#include "imgui-SFML.h"

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({ 1200, 800 }), "ImGui + SFML"); 
    window.setFramerateLimit(60);
    if (!ImGui::SFML::Init(window))
    {
        std::cout << "Unexpected Error In Creating Window";
        return 0;
    }

    sf::RectangleShape rect({ 200.f,100.5 });
    rect.setPosition({ 350,300 });
    float circleRadius = 100.f;
    sf::CircleShape shape(circleRadius);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition({ 50,50 });

    sf::Clock deltaClock;
    while (window.isOpen()) {
        while (const auto event = window.pollEvent()) {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                {
                    window.close();
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::Up)
                {
                    shape.move({ 0,-10 });
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::Down)
                {
                    shape.move({ 0,10 });
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::Right)
                {
                    shape.move({ 10,0 });
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::Left)
                {
                    shape.move({ -10,0 });
                }
            }
        }
        sf::Vector2f circleposition = shape.getPosition();
        sf::Vector2f rectangelpostion = rect.getScale();
        if (shape.getGlobalBounds().findIntersection(rect.getGlobalBounds()))
        {
            ImGui::SFML::Update(window, deltaClock.restart());
            window.clear({ 140U,73U,10U }, 100U);
            ImGui::TextColored({ 140U,73U,100U,100U }, "Game Over!!");
            ImGui::SFML::Render(window);
            window.display();
            sf::sleep(sf::milliseconds(400));
            window.close();
        }
        else
        {

            bool CircleExists;
            ImGui::SFML::Update(window, deltaClock.restart());

            ImGui::ShowDemoWindow();

            ImGui::Begin("Modify Circle");
            ImGui::Checkbox("Toggle Circle", &CircleExists);
            ImGui::SliderFloat("Circle Radius", &circleRadius, 50.f, 250.f);
            ImGui::End();

            shape.setRadius(circleRadius);
            window.clear({ 140U,73U,10U }, 100U);
            if (CircleExists)
                window.draw(shape);
            window.draw(rect);
            ImGui::SFML::Render(window);
            window.display();
        }
    }

    ImGui::SFML::Shutdown();
}