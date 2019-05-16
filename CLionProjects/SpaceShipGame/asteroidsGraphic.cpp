//
// Created by Bartek on 15.05.2019.
//

#include "asteroidsGraphic.h"
#include <windows.h>

asteroidsGraphic::asteroidsGraphic(int asteroidSize, Asteroids &asteroids):asteroids(asteroids) {
    this->asteroidSize = asteroidSize;
    texture.loadFromFile("head.jpg");
    i=0;
    asteroidSprite.setTexture(texture);
    asteroidSprite.setPosition(asteroids.getAsteroidsBox()[0].xPos, asteroids.getAsteroidsBox()[0].yPos);
    asteroidSpriteBox.push_back(asteroidSprite);
}
void asteroidsGraphic::draw(sf::RenderWindow &window) {
    asteroids.moveAsteroid();
    window.draw(asteroidSpriteBox[i]);
    if (asteroids.getAsteroidsBox()[i].xPos == 500) {
        asteroids.setAsteroidPosition();
        i++;
    }
    asteroidSprite.setTexture(texture);
    asteroidSprite.setPosition(asteroids.getAsteroidsBox()[i].xPos, asteroids.getAsteroidsBox()[i].yPos);
    asteroidSpriteBox.push_back(asteroidSprite);

}

const sf::RectangleShape &asteroidsGraphic::getAsteroidRectangle() const {
    return asteroidRectangle;
}

const std::vector<sf::Sprite> &asteroidsGraphic::getAsteroidSpriteBox() const {
    return asteroidSpriteBox;
}
