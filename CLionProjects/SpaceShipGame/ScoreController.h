//
// Created by Bartek on 18.05.2019.
//
#include "ScoreView.h"
#ifndef SPACESHIPGAME_SCORECONTROLLER_H
#define SPACESHIPGAME_SCORECONTROLLER_H


class ScoreController {
ScoreView &scoreView;
public:
    ScoreController(ScoreView &scoreView);
    void draw(sf::RenderWindow &window);
};


#endif //SPACESHIPGAME_SCORECONTROLLER_H
