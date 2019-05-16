//
// Created by Bartek on 15.05.2019.
//

#include "Board.h"
#include <iostream>

Board::Board(Ship &ship, Asteroids &asteroids,ShipGraphic &shipGraphic,asteroidsGraphic &asteroidsGraphic1):
ship(ship),
asteroids(asteroids),
shipGraphic(shipGraphic),
asteroidsGraphic1(asteroidsGraphic1)
{}
void Board::collision() {
    for (int i = 0; i <10 ; ++i) {
        if (shipGraphic.getShipSprite().getGlobalBounds().intersects(asteroidsGraphic1.getAsteroidSpriteBox()[i].getGlobalBounds())) {
            std::cout << "loooser";
        }
    }

}
