//
// Created by Bartek on 15.05.2019.
//
#include <SFML/Graphics.hpp>
#include "Asteroids.h"
#include "cstdlib"
#include "ShipGraphic.h"
#ifndef SPACESHIPGAME_ASTEROIDSGRAPHIC_H
#define SPACESHIPGAME_ASTEROIDSGRAPHIC_H


class asteroidsGraphic {
    Asteroids &asteroids;
    int asteroidSize;
    sf::Texture texture;
    std::vector<sf::Sprite> asteroidSpriteBox ;
    sf::Sprite asteroidSprite;
    int width, high;
    float elapseTime;
    sf::Clock clock;
    float timer, asteroidsAmount, speed;

public:
    asteroidsGraphic(int asteroidSize, Asteroids &asteroids, int widht, int high);
    void draw(sf::RenderWindow &window);
    void generateNewAsteroid();
    const std::vector<sf::Sprite> &getAsteroidSpriteBox() const;
    void setAsteroidSprite(int asteroidIndex);
    void setSpeed(float speedFromIntro){speed = speedFromIntro;}
    void  setAsteroidAmount(float amountFromIntro){asteroidsAmount = amountFromIntro;}
    void resetAsteroids(){}
};


#endif //SPACESHIPGAME_ASTEROIDSGRAPHIC_H
