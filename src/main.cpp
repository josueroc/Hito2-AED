#include <SFML/Graphics.hpp>
#include "QuadTree.h"
#include "Snake.h"
#include "Food.h"

int main() {
    int width = 800, height = 600;

    sf::RenderWindow window(sf::VideoMode(width, height), "Snake QuadTree");

    Snake snake(width / 2, height / 2);

    QuadTree qt(width, height);
    for (auto& p : snake.getBody())
        qt.insert(p);

    Food food(width, height);
    food.generate(qt);

    sf::RectangleShape block(sf::Vector2f(10, 10));
    sf::Clock clock;
    float speed = 0.1f;

    Direction dir = RIGHT;

    while (window.isOpen()) {

        // --- EVENTOS (API real de SFML 2.6)
        sf::Event event;
        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Up && dir != DOWN) dir = UP;
                if (event.key.code == sf::Keyboard::Down && dir != UP) dir = DOWN;
                if (event.key.code == sf::Keyboard::Left && dir != RIGHT) dir = LEFT;
                if (event.key.code == sf::Keyboard::Right && dir != LEFT) dir = RIGHT;
            }
        }

        // --- MOVIMIENTO Y COLISIONES
        if (clock.getElapsedTime().asSeconds() > speed) {

            Point next = snake.nextHeadPosition(dir);

            if (snake.willCollide(next, width, height)) {
                window.close();
                break;
            }

            snake.move(dir);
            clock.restart();

            qt = QuadTree(width, height);
            for (auto& p : snake.getBody())
                qt.insert(p);

            if (qt.search(food.getPosition())) {
                snake.grow();
                food.generate(qt);
            }
        }

        // --- DIBUJAR
        window.clear();

        // comida
        block.setFillColor(sf::Color::Red);
        block.setPosition(food.getPosition().x, food.getPosition().y);
        window.draw(block);

        // snake
        block.setFillColor(sf::Color::Green);
        for (auto& p : snake.getBody()) {
            block.setPosition(p.x, p.y);
            window.draw(block);
        }

        window.display();
    }

    return 0;
}