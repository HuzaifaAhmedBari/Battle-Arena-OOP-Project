#include "imgui.h"
#include "imgui-SFML.h"

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({ 1200, 800 }), "ImGui + SFML");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

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

        bool CircleExists;
        ImGui::SFML::Update(window, deltaClock.restart());

        ImGui::ShowDemoWindow();

        ImGui::Begin("Modify Circle");
        ImGui::Checkbox("Circle",&CircleExists);
        ImGui::SliderFloat("Circle Radius",&circleRadius,50.f,250.f);
        ImGui::End();

        shape.setRadius(circleRadius);
        window.clear({140U,73U,10U},100U);
        if(CircleExists)
            window.draw(shape);
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}