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
    int width, high;
public:
    ExtraVittalityGraphic(ExtraVittality &extraVittality, int width, int high);
    void draw(sf::RenderWindow &window);
    void generateNewItem();
    const std::vector<sf::Sprite> &getItemSpriteBox() const;
    void setItemSprite(int itemBoxIndeks);

};


#endif //SPACESHIPGAME_EXTRAVITTALITYGRAPHIC_H
