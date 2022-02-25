//
// Created by meanx on 25.02.2022.
//

#ifndef FIRSTSFMLGAME_HELLO_WORLD_H
#define FIRSTSFMLGAME_HELLO_WORLD_H

#include <SFML/Graphics.hpp>

using namespace sf;

class hello_world {

public:
    void action() {
        RenderWindow window(VideoMode(500, 500), "SFML works!");
        CircleShape shape(200.f);
        shape.setFillColor(Color::Cyan);

        while (window.isOpen()) {
            Event event{};
            while (window.pollEvent(event)) {
                if (event.type == Event::Closed)
                    window.close();
            }
            window.clear();
            window.draw(shape);
            window.display();
        }
    }
};

#endif //FIRSTSFMLGAME_HELLO_WORLD_H
