//
// Created by Bartek on 15.05.2019.
//

#include "asteroidsGraphic.h"
#include <windows.h>

asteroidsGraphic::asteroidsGraphic(int asteroidSize, Asteroids &asteroids):asteroids(asteroids) {
    this->asteroidSize = asteroidSize;
    texture.loadFromFile("head.jpg");
}
void asteroidsGraphic::draw(sf::RenderWindow &window) {
    asteroids.moveAsteroid();
    Sleep(10);
    asteroidSprite.setTexture(texture);
    asteroidSprite.setPosition(asteroids.getAsteroidPosition().xPos, asteroids.getAsteroidPosition().yPos);
    window.draw(asteroidSprite);
}

const sf::RectangleShape &asteroidsGraphic::getAsteroidRectangle() const {
    return asteroidRectangle;
}

const sf::Sprite &asteroidsGraphic::getAsteroidSprite() const {
    return asteroidSprite;
}
