#include <iostream>
#include "player.cpp"
#include <array>
#include <SFML/Graphics.hpp>


int Height = 100;
int Width = 100;

int fps = 30;

bool Resizable = false;

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple Tag Game");

    sf::RectangleShape rect(sf::Vector2f(100, 100));
    rect.setFillColor(sf::Color::Blue);
    rect.setPosition(sf::Vector2f(100, 100));

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
        }

        window.clear();

        window.draw(rect);

        window.display();
    }

    return 0;
}