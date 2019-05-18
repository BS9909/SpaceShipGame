//
// Created by Bartek on 17.05.2019.
//
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include "ExtraVittality.h"
#ifndef SPACESHIPGAME_EXTRAVITTALITYGRAPHIC_H
#define SPACESHIPGAME_EXTRAVITTALITYGRAPHIC_H


class ExtraVittalityGraphic {
    ExtraVittality &extraVittality;
    sf::Texture itemTexture;
    sf::Sprite itemSprite;
    std::vector<sf::Sprite> itemSpriteBox;

public:
    ExtraVittalityGraphic(ExtraVittality &extraVittality);
    void draw(sf::RenderWindow &window);
    void generateNewItem();
    const std::vector<sf::Sprite> &getItemSpriteBox() const;
    void setItemSprite(int itemBoxIndeks);

};


#endif //SPACESHIPGAME_EXTRAVITTALITYGRAPHIC_H
