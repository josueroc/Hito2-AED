#include <SFML/Graphics.hpp>
#include "QuadTree.h"
#include "Snake.h"
#include "Food.h"

int main() {
    int width = 800, height = 600;
    sf::RenderWindow window(sf::VideoMode(width, height), "Snake QuadTree");

    Snake snake(width/2, height/2);
    Food food(width, height);
    food.generate(snake.getBody());

    sf::RectangleShape block(sf::Vector2f(10,10));
    sf::Clock clock;
    float speed = 0.1f;

    Direction dir = RIGHT;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Up && dir != DOWN) dir = UP;
                if (event.key.code == sf::Keyboard::Down && dir != UP) dir = DOWN;
                if (event.key.code == sf::Keyboard::Left && dir != RIGHT) dir = LEFT;
                if (event.key.code == sf::Keyboard::Right && dir != LEFT) dir = RIGHT;
            }
        }

        if (clock.getElapsedTime().asSeconds() > speed) {
            snake.move(dir);
            clock.restart();

            // Verificar colisión con comida
            if (snake.getBody().front().x == food.getPosition().x &&
                snake.getBody().front().y == food.getPosition().y) {
                snake.grow();
                food.generate(snake.getBody());
            }

            // Verificar colisión
            if (snake.checkCollision(width, height)) {
                window.close();
            }
        }

        window.clear();

        // Dibujar comida
        block.setFillColor(sf::Color::Red);
        block.setPosition(food.getPosition().x, food.getPosition().y);
        window.draw(block);

        // Dibujar serpiente
        block.setFillColor(sf::Color::Green);
        for (auto& p : snake.getBody()) {
            block.setPosition(p.x, p.y);
            window.draw(block);
        }

        window.display();
    }

    return 0;
}
