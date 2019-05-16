//
// Created by Bartek on 15.05.2019.
//
#include <SFML/Graphics.hpp>
#include "Ship.h"
#ifndef SPACESHIPGAME_SHIPGRAPHIC_H
#define SPACESHIPGAME_SHIPGRAPHIC_H


class ShipGraphic {
    Ship &ship;
    int shipSize;
    sf::RectangleShape shipRectangle;
    sf::Texture texture;
    sf::Sprite shipSprite;

public:
    const sf::Sprite &getShipSprite() const;
    const sf::RectangleShape &getShipRectangle() const;
    ShipGraphic(Ship &ship, int shipSize);
    void draw(sf::RenderWindow &window);

};


#endif //SPACESHIPGAME_SHIPGRAPHIC_H
