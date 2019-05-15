//
// Created by Bartek on 15.05.2019.
//
#include <SFML/Graphics.hpp>
#include "Asteroids.h"
#ifndef SPACESHIPGAME_ASTEROIDSGRAPHIC_H
#define SPACESHIPGAME_ASTEROIDSGRAPHIC_H


class asteroidsGraphic {
    Asteroids &asteroids;
    int asteroidSize;
    sf::RectangleShape asteroidRectangle;
    sf::Sprite asteroidSprite;
    sf::Texture texture;
public:
    const sf::RectangleShape &getAsteroidRectangle() const;
    asteroidsGraphic(int asteroidSize, Asteroids &asteroids);
    void draw(sf::RenderWindow &window);
    const sf::Sprite &getAsteroidSprite() const;

};


#endif //SPACESHIPGAME_ASTEROIDSGRAPHIC_H
