//
// Created by Bartek on 15.05.2019.
//
#include "Ship.h"
#include "Asteroids.h"
#include "ShipGraphic.h"
#include "asteroidsGraphic.h"
#include "ExtraVittalityGraphic.h"
#include "ExtraVittality.h"
#include "ShootView.h"
#include "shipController.h"
#include <SFML/Graphics.hpp>
#ifndef SPACESHIPGAME_BOARD_H
#define SPACESHIPGAME_BOARD_H

class Board {
    Ship &ship;
    Asteroids &asteroids;
    ShipGraphic &shipGraphic;
    asteroidsGraphic &asteroidsGraphic1;
    ExtraVittalityGraphic &extraVittalityGraphic;
    ExtraVittality &extraVittality;
    ShootView &shootView;
    sf::RenderWindow &window;
    shipController &shipController1;
    bool isFinished;
    int timer;

public:
    Board(sf::RenderWindow &window,Ship &ship, Asteroids &asteroids,ShipGraphic &shipGraphic,asteroidsGraphic &asteroidsGraphic1, ExtraVittality &extraVittality, ExtraVittalityGraphic &extraVittalityGraphic, ShootView&shootView,shipController &shipController1);
    void collision();

    bool getIsFinished(){return isFinished;}
    void draw(sf::RenderWindow &window);
    const std::string getTimer() const {std::string _str = std::to_string(timer);return _str; return _str;}
};


#endif //SPACESHIPGAME_BOARD_H
