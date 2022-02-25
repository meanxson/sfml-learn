//
// Created by meanx on 25.02.2022.
//

#include <SFML/Graphics.hpp>
#include "hello_world.h"

using namespace sf;

void hello_world() {
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