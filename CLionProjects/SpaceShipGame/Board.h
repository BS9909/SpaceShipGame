//
// Created by Bartek on 15.05.2019.
//
#include "Ship.h"
#include "Asteroids.h"
#include "ShipGraphic.h"
#include "asteroidsGraphic.h"
#include <SFML/Graphics.hpp>
#ifndef SPACESHIPGAME_BOARD_H
#define SPACESHIPGAME_BOARD_H


class Board {
    Ship &ship;
    Asteroids &asteroids;
    ShipGraphic &shipGraphic;
    asteroidsGraphic &asteroidsGraphic1;
public:
    Board(Ship &ship, Asteroids &asteroids,ShipGraphic &shipGraphic,asteroidsGraphic &asteroidsGraphic1);

    void collision();

};


#endif //SPACESHIPGAME_BOARD_H
