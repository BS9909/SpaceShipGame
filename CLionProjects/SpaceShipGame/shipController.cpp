//
// Created by Bartek on 15.05.2019.
//

#include "shipController.h"
shipController::shipController(Ship &ship,ShipGraphic &shipGraphic):ship(ship),
shipGraphic(shipGraphic)
{}

void shipController::controllEvents(sf::Event event) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        shipGraphic.setDirection(DOWN);

    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        shipGraphic.setDirection(UP);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        shipGraphic.setDirection(RIGHT);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        shipGraphic.setDirection(LEFT);
    }
}