#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "My window");

    sf::RectangleShape rect({ 400,200 });
    rect.setFillColor(sf::Color::Blue);
    rect.setPosition({200,100});

    while (window.isOpen())
    {

        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Down)
                {
                    rect.move({ 0,10 });
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::Up)
                {
                    rect.move({ 0,-10 });
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::Left)
                {
                    rect.move({ -10,0 });
                }
                else if(keyPressed->scancode == sf::Keyboard::Scancode::Right)
                {
                    rect.move({ 10,0 });
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                {
                    window.close();
                }
            }
        }


        window.clear(sf::Color::Black);

        window.draw(rect);

        window.display();
    }
}