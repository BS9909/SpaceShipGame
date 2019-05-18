//
// Created by Bartek on 16.05.2019.
//

#include <SFML/Graphics.hpp>
#include "ShipGraphic.h"
#include <iostream>
#include <vector>
#ifndef SPACESHIPGAME_SHOOTVIEW_H
#define SPACESHIPGAME_SHOOTVIEW_H


class ShootView {
    sf::Texture bulletTexture;
    sf::Sprite bulletSprite;
    std::vector<sf::Sprite> bulletSpriteBox;
    ShipGraphic &shipGraphic;
    bool isShoot;
    sf::Time elapsed;
    sf::Clock clock;
public:
    ShootView(ShipGraphic &shipGraphic);
    void draw(sf::RenderWindow &window);
    const std::vector<sf::Sprite> &getBulletSpriteBox() const;

};


#endif //SPACESHIPGAME_SHOOTVIEW_H
