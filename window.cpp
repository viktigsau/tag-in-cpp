#include <SFML/Graphics.hpp>


int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Create a circle shape
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(100, 100);

    // Create a rectangle shape
    sf::RectangleShape rectangle(sf::Vector2f(120, 60));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(300, 200);

    // Main loop
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();

        // Draw shapes
        window.draw(circle);
        window.draw(rectangle);

        // Display the contents of the window
        window.display();
    }

    return 0;
}