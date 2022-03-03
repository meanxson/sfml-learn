//
// Created by meanx on 03.03.2022.
//

#include "PlayerMovement.h"

using namespace sf;

void move(RectangleShape& player, float speed = 0) {

    if (Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
        player.move(-0.1f * speed, 0.0f);
    } else if (Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
        player.move(0.1f * speed, 0.0f);
    } else if (Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
        player.move(0.0f, -0.1f * speed);
    } else if (Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
        player.move(0.0f, 0.1f * speed);
    }
}
