//
// Created by Bartek on 18.05.2019.
//
#include "IntroView.h"
#ifndef SPACESHIPGAME_INTROCONTROLLER_H
#define SPACESHIPGAME_INTROCONTROLLER_H


class IntroController {
    IntroView &introView;
    bool isFinished = false;
public:
    IntroController (IntroView &introView);
    void controllEvents(sf::RenderWindow &window);
    bool getIsFinished() {return isFinished;}
    void draw(sf::RenderWindow &window);
};


#endif //SPACESHIPGAME_INTROCONTROLLER_H
