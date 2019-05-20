//
// Created by Bartek on 18.05.2019.
//

#include "IntroController.h"

IntroController::IntroController(IntroView &introView): introView(introView) {}

void IntroController::controllEvents(sf::RenderWindow &window) {
    auto mouse_position = sf::Mouse::getPosition(window);
    auto translated_pos = window.mapPixelToCoords(mouse_position);
    if (introView.getText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
            isFinished = true;
    }
}
void IntroController::draw(sf::RenderWindow &window) {
    introView.draw(window);
}