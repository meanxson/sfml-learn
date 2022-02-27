//
// Created by meanx on 28.02.2022.
//

#include <SFML/Graphics.hpp>
#include "WindowLearn.h"

using namespace sf;

void window_learn() {
    RenderWindow window(VideoMode(512, 512), "Window & Window Events Learning",
                        Style::Close | Style::Resize);

    while (window.isOpen()) {
        Event event{};
        while (window.pollEvent(event)) {
            switch (event.type) {
                case Event::Closed:
                    window.close();
                    break;
                case Event::Resized:
                    printf("Width: %i Height %i \n", event.size.width, event.size.height);
                    break;

                case Event::TextEntered:
                    if (event.text.unicode < 128)
                        printf("%c", event.text.unicode);
                    break;
            }

            if (event.type == event.Closed) {
                window.close();
            }
        }
    }
}
