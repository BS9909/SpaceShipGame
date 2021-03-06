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
    float elapseTime;
    sf::Clock clock;
    float delay , timer = 0;
    int width;
public:
    ShootView(ShipGraphic &shipGraphic, int width);
    void draw(sf::RenderWindow &window);
    const std::vector<sf::Sprite> &getBulletSpriteBox() const;
    void deleteSprite(int deleteIndeks);
};


#endif //SPACESHIPGAME_SHOOTVIEW_H
