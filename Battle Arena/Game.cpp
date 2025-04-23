#include "Game.hpp"

void Game::run() {
    RenderWindow window(sf::VideoMode({ 1600, 900 }), "BATTLE ARENA");
    window.setFramerateLimit(60);

    if (!ImGui::SFML::Init(window))
    {
        std::cout << "Unexpected Error In Creating Window";
        return;
    }

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
            style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
            style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.3f);
            style.Colors[ImGuiCol_ButtonActive] = ImVec4(1.f, 1.f, 1.f, 0.5f);

            ImGui::SetNextWindowPos(ImVec2((window.getSize().x - 600) / 2, (window.getSize().y + 320) / 2));
            ImGui::SetNextWindowSize(ImVec2(550, 200));

            ImGui::Begin("START", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

            if (ImGui::Button(" ", { 500,160 }))
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
