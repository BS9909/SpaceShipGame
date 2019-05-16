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
    sf::Texture texture;
    int i;
    std::vector<sf::Sprite> asteroidSpriteBox ;
    sf::Sprite asteroidSprite;
public:
    const std::vector<sf::Sprite> &getAsteroidSpriteBox() const;
    const sf::RectangleShape &getAsteroidRectangle() const;
    asteroidsGraphic(int asteroidSize, Asteroids &asteroids);
    void draw(sf::RenderWindow &window);


};


#endif //SPACESHIPGAME_ASTEROIDSGRAPHIC_H
