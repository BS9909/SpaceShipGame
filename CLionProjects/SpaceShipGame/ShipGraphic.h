//
// Created by Bartek on 15.05.2019.
//
#include <SFML/Graphics.hpp>
#include "Ship.h"
#ifndef SPACESHIPGAME_SHIPGRAPHIC_H
#define SPACESHIPGAME_SHIPGRAPHIC_H
enum Direction{UP,DOWN, LEFT, RIGHT};

class ShipGraphic {
    Ship &ship;
    int shipSize;
    sf::RectangleShape shipRectangle;
    sf::Texture texture;
    sf::Texture boomTexture;
    sf::Sprite shipSprite;
    Direction direction;

public:
    const sf::Sprite &getShipSprite() const;
    const sf::RectangleShape &getShipRectangle() const;
    ShipGraphic(Ship &ship, int shipSize);
    void draw(sf::RenderWindow &window);
    void setDirection(Direction direction1){direction = direction1;}
    void setNewTexture(sf::RenderWindow &window);
};


#endif //SPACESHIPGAME_SHIPGRAPHIC_H
