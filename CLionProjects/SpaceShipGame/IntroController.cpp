//
// Created by Bartek on 18.05.2019.
//

#include "IntroController.h"

IntroController::IntroController(IntroView &introView,asteroidsGraphic &asteroidsGraphic1):
introView(introView),
asteroidsGraphic1(asteroidsGraphic1)
{isFinished = false;}

void IntroController::controllEvents(sf::RenderWindow &window) {
    auto mouse_position = sf::Mouse::getPosition(window);
    auto translated_pos = window.mapPixelToCoords(mouse_position);
    if (introView.getText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
            isFinished = true;
    }
    if (introView.getEasyText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
            asteroidsGraphic1.setSpeed(-0.5);
            asteroidsGraphic1.setAsteroidAmount(0.5);
        }
    }
    if (introView.getNormalText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
            asteroidsGraphic1.setSpeed(-1);
            asteroidsGraphic1.setAsteroidAmount(0.5);
        }
    }
    if (introView.getHardText().getGlobalBounds().contains(translated_pos)) {
        {
            asteroidsGraphic1.setSpeed(-1);
            asteroidsGraphic1.setAsteroidAmount(0.2);
        }
    }
}
void IntroController::draw(sf::RenderWindow &window) {
    introView.draw(window);
}