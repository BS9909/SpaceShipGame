//
// Created by Bartek on 18.05.2019.
//
#include "ScoreView.h"
#include "Ship.h"
#include "Board.h"
#include "asteroidsGraphic.h"
#include "IntroController.h"
#ifndef SPACESHIPGAME_SCORECONTROLLER_H
#define SPACESHIPGAME_SCORECONTROLLER_H


class ScoreController {
ScoreView &scoreView;
Ship &ship;
Board &board;
asteroidsGraphic &asteroidsGraphic1;
IntroController &introController;
bool isFinished;
public:
    ScoreController(ScoreView &scoreView,Ship &ship,Board &board,asteroidsGraphic &asteroidsGraphic1,IntroController &introController);
    void draw(sf::RenderWindow &window);
    void controllEvent();
    bool getisFinished(){ return isFinished;}
    void resetFinished(){isFinished = false;}
};


#endif //SPACESHIPGAME_SCORECONTROLLER_H
