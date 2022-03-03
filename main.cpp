#include <SFML/Graphics.hpp>
#include "learning/KeyboardInput & Movement/PlayerMovement.h"

using namespace sf;

int main() {
    RenderWindow window(VideoMode(512, 512), "Drawing", Style::Resize | Style::Close);
    RectangleShape player(Vector2f(100.0f, 100.0f));
    player.setFillColor(Color::Cyan);

    while (window.isOpen()) {
        Event event{};
        while (window.pollEvent(event)) {
            switch (event.type) {
                case Event::Closed:
                    window.close();
                    break;
            }
        }

        move(player, 5);

        window.clear();
        window.draw(player);
        window.display();
    }
}