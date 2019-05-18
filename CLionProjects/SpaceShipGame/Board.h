//
// Created by Bartek on 15.05.2019.
//
#include "Ship.h"
#include "Asteroids.h"
#include "ShipGraphic.h"
#include "asteroidsGraphic.h"
#include "ExtraVittalityGraphic.h"
#include "ExtraVittality.h"
#include <SFML/Graphics.hpp>
#ifndef SPACESHIPGAME_BOARD_H
#define SPACESHIPGAME_BOARD_H

enum GameState{RUNNING, FINISHED_LOOSE};
class Board {
    Ship &ship;
    Asteroids &asteroids;
    ShipGraphic &shipGraphic;
    asteroidsGraphic &asteroidsGraphic1;
    ExtraVittalityGraphic &extraVittalityGraphic;
    ExtraVittality &extraVittality;
    GameState gameState;
    int score;
    sf::RenderWindow &window;
public:
    Board(sf::RenderWindow &window,Ship &ship, Asteroids &asteroids,ShipGraphic &shipGraphic,asteroidsGraphic &asteroidsGraphic1, ExtraVittality &extraVittality, ExtraVittalityGraphic &extraVittalityGraphic);
    void collision();
     std::string getScore(){ std::string _str = std::to_string(score);return _str;}
};


#endif //SPACESHIPGAME_BOARD_H
