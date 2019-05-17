//
// Created by Bartek on 16.05.2019.
//
#include "Shoot.h"
#include <SFML/Graphics.hpp>
#ifndef SPACESHIPGAME_SHOOTVIEW_H
#define SPACESHIPGAME_SHOOTVIEW_H


class ShootView {
    sf::Texture bulletTexture;
    sf::Sprite bulletSprite;
    Shoot &shoot;
public:
    ShootView(Shoot &shoot);
    void draw(sf::RenderWindow &window);

};


#endif //SPACESHIPGAME_SHOOTVIEW_H
