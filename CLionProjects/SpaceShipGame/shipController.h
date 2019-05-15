//
// Created by Bartek on 15.05.2019.
//
#include <SFML/Graphics.hpp>
#include "Ship.h"
#ifndef SPACESHIPGAME_SHIPCONTROLLER_H
#define SPACESHIPGAME_SHIPCONTROLLER_H


class shipController {
    Ship &ship;
public:
    shipController(Ship &ship);
    void controllEvents(sf::Event event);
};



#endif //SPACESHIPGAME_SHIPCONTROLLER_H
