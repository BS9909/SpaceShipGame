//
// Created by Bartek on 18.05.2019.
//
#include "IntroView.h"
#include "asteroidsGraphic.h"
#ifndef SPACESHIPGAME_INTROCONTROLLER_H
#define SPACESHIPGAME_INTROCONTROLLER_H


class IntroController {
    IntroView &introView;
    asteroidsGraphic &asteroidsGraphic1;
    bool isFinished, chooseLevel;
public:
    IntroController (IntroView &introView,asteroidsGraphic &asteroidsGraphic1);
    void controllEvents(sf::RenderWindow &window);
    bool getIsFinished() {return isFinished;}
    void draw(sf::RenderWindow &window);
    void resetFinishedIntro(){isFinished = false;chooseLevel = false;}
};


#endif //SPACESHIPGAME_INTROCONTROLLER_H
