//
// Created by Bartek on 18.05.2019.
//

#include "IntroController.h"

IntroController::IntroController(IntroView &introView,asteroidsGraphic &asteroidsGraphic1):
introView(introView),
asteroidsGraphic1(asteroidsGraphic1)
{
    isFinished = false;
    chooseLevel = false;
}

void IntroController::controllEvents(sf::RenderWindow &window) {
    auto mouse_position = sf::Mouse::getPosition(window);
    auto translated_pos = window.mapPixelToCoords(mouse_position);
    if (introView.getText().getGlobalBounds().contains(translated_pos) && chooseLevel) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
            isFinished = true;
    }
    else if(introView.getText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
            introView.setLevelText("Choose level!");
            introView.setLevelColor(sf::Color::Blue);
            introView.setTextxPosition(-70);
        }
    }

    if (introView.getEasyText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
            asteroidsGraphic1.setSpeed(-0.5);
            asteroidsGraphic1.setAsteroidAmount(0.5);
            introView.setLevelText("EASY");
            introView.setLevelColor(sf::Color::Green);
            introView.setTextxPosition(20);
            chooseLevel = true;
        }
    }
    if (introView.getNormalText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
            asteroidsGraphic1.setSpeed(-1);
            asteroidsGraphic1.setAsteroidAmount(0.5);
            chooseLevel = true;
            introView.setLevelText("NORMAL");
            introView.setLevelColor(sf::Color::Cyan);
            introView.setTextxPosition(-10);
        }
    }
    if (introView.getHardText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
            asteroidsGraphic1.setSpeed(-1);
            asteroidsGraphic1.setAsteroidAmount(0.2);
            chooseLevel = true;
            introView.setLevelText("HARD");
            introView.setLevelColor(sf::Color::Red);
            introView.setTextxPosition(16);
        }
    }
}
void IntroController::draw(sf::RenderWindow &window) {
    introView.draw(window);
}