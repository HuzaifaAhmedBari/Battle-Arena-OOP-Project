#include "Game.hpp"

void Game::run() {
    RenderWindow window(sf::VideoMode({ 1200, 800 }), "BATTLE ARENA");
    window.setFramerateLimit(60);

    if (!ImGui::SFML::Init(window))
    {
        std::cout << "Unexpected Error In Creating Window";
        return;
    }

    Texture BackGround_texture;
    if (!BackGround_texture.loadFromFile("StartBackground.png"))
    {
        cout << "Error Loading the Background" << endl;
    }
    Sprite BackGround_sprite(BackGround_texture);
    float scaleX = 1200.f / BackGround_texture.getSize().x;
    float scaleY = 800.f / BackGround_texture.getSize().y;
    BackGround_sprite.setScale({ scaleX, scaleY });

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
            start_screen(window,currentstate, BackGround_sprite);
        }
        else if (currentstate == SelectCharacter)
        {
            //select_character_screen();
            window.close();
        }
        else if (currentstate == SelectWeapon)
        {
            //select_weapon_screen();
            window.close();
        }

        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}

void Game::start_screen(RenderWindow &window,GameState &currentstate, Sprite &BackGround_sprite) {
    window.draw(BackGround_sprite);

    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 30.0f;
    style.FramePadding = ImVec2(15, 10);
    style.Colors[ImGuiCol_Button] = ImVec4(0, 0, 0, 0);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(1.f, 1.f, 1.f, 0.15f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(1.f, 1.f, 1.f, 0.5f);

    float buttonWidth = window.getSize().x * 0.3f;
    float buttonHeight = window.getSize().y * 0.159f;
    ImGui::SetNextWindowPos(ImVec2(window.getSize().x * 0.485f - buttonWidth / 2, window.getSize().y * 0.885f - buttonHeight / 2));
    ImGui::SetNextWindowSize(ImVec2(buttonWidth + 50, buttonHeight + 50));


    ImGui::Begin("START", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar);

    if (ImGui::Button(" ", { buttonWidth,buttonHeight }))
    {
        currentstate = SelectCharacter;
    }

    ImGui::End();
}

void Game::select_character_screen() {

}

void Game::select_weapon_screen() {

}
