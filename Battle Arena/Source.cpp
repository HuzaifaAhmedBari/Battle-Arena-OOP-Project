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

int main() {
    RenderWindow window(sf::VideoMode({ 1600, 900 }), "BATTLE ARENA"); 
    window.setFramerateLimit(60);

    if (!ImGui::SFML::Init(window))
    {
        std::cout << "Unexpected Error In Creating Window";
        return 0;
    }

    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.Fonts->Fonts[0]->Scale = 3.0f;

    Texture texture;
    if (!texture.loadFromFile("StartBackground.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite sprite(texture);
    float scaleX = 1600.f / texture.getSize().x;
    float scaleY = 900.f / texture.getSize().y;
    sprite.setScale({ scaleX, scaleY });

    GameState currentstate = GameState::Start;

    Clock deltaClock;
    while (window.isOpen()) {
        while (const auto event = window.pollEvent()) {
            ImGui::SFML::ProcessEvent(window, *event);

            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());
        window.clear();

        if (currentstate == Start)
        {
            window.draw(sprite);

            ImGuiStyle& style = ImGui::GetStyle();
            style.FrameRounding = 30.0f;
            style.FramePadding = ImVec2(15, 10);
            style.Colors[ImGuiCol_Button] = ImVec4(0.55f, 0.27f, 0.07f, 1.0f);
            style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.65f, 0.33f, 0.10f, 1.0f);
            style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.45f, 0.22f, 0.05f, 1.0f);

            ImGui::SetNextWindowPos(ImVec2((window.getSize().x - 350) / 2, (window.getSize().y + 350) / 2));
            ImGui::SetNextWindowSize(ImVec2(450, 350));

            ImGui::Begin("START", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

            if (ImGui::Button("START", { 300,100 }))
            {
                currentstate = Select;
            }

            ImGui::End();
        }
        else if (currentstate == Select)
        {
            window.close();
        }

        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}
