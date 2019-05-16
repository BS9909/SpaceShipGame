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
    sf::Texture texture;
    std::vector<sf::Sprite> asteroidSpriteBox ;
    sf::Sprite asteroidSprite;
public:
    asteroidsGraphic(int asteroidSize, Asteroids &asteroids);
    void draw(sf::RenderWindow &window);
    void generateNewAsteroid();
    const std::vector<sf::Sprite> &getAsteroidSpriteBox() const;
};


#endif //SPACESHIPGAME_ASTEROIDSGRAPHIC_H
