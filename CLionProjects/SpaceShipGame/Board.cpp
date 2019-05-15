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
    if(shipGraphic.getShipSprite().getGlobalBounds().intersects(asteroidsGraphic1.getAsteroidSprite().getGlobalBounds())){
        std::cout<<"loooser";
    }

}
