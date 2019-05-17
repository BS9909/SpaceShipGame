//
// Created by Bartek on 16.05.2019.
//
#include <SFML/Graphics.hpp>
#include "ShootView.h"
#ifndef SPACESHIPGAME_SHOOTCONTROLLER_H
#define SPACESHIPGAME_SHOOTCONTROLLER_H


class ShootController {
    ShootView &shootView;
    sf::RenderWindow &window;

public:
    ShootController(ShootView &shootView,sf::RenderWindow &window);
    void controllEvent();

};


#endif //SPACESHIPGAME_SHOOTCONTROLLER_H
