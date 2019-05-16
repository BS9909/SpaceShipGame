//
// Created by Bartek on 15.05.2019.
//

#include "shipController.h"
shipController::shipController(Ship &ship):ship(ship) {}

void shipController::controllEvents(sf::Event event) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        ship.setDirection(DOWN);
        ship.shipMove();

    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        ship.setDirection(UP);
        ship.shipMove();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        ship.setDirection(RIGHT);
        ship.shipMove();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        ship.setDirection(LEFT);
        ship.shipMove();
    }
}