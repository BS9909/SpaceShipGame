//
// Created by Bartek on 15.05.2019.
//

#include "asteroidsGraphic.h"
#include <windows.h>

asteroidsGraphic::asteroidsGraphic(int asteroidSize, Asteroids &asteroids, int width, int high):
asteroids(asteroids)
{
    this->asteroidSize = asteroidSize;
    this->width = width;
    this->high = high;
    texture.loadFromFile("asteroid.png");
    asteroidSprite.setTexture(texture);
    asteroidSprite.setScale(sf::Vector2f(0.09,0.09));
    asteroidSprite.setPosition(asteroids.getAsteroidsBox()[0].xPos,asteroids.getAsteroidsBox()[0].yPos);
    asteroidSpriteBox.push_back(asteroidSprite);
    generateNewAsteroid();
}
void asteroidsGraphic::draw(sf::RenderWindow &window) {
    //Kontrola wielkosci vectorów
    std::cout << "Vector Spritow: " << asteroidSpriteBox.size() << std::endl;
    std::cout << "Vector pozycji: " << asteroids.getAsteroidsBox().size() << std::endl;
    //std::cout<<asteroidSpriteBox[0].getPosition().x<<std::endl;

    for (int i = 0; i < asteroidSpriteBox.size(); ++i) {
        asteroidSpriteBox[i].move(-1, 0);
        window.draw(asteroidSpriteBox[i]);
    }
    generateNewAsteroid();
}
void asteroidsGraphic::generateNewAsteroid() {
    for (int j = 0; j < asteroidSpriteBox.size(); ++j) {
        if (asteroidSpriteBox[j].getPosition().x == 500) {
            asteroids.setAsteroidPosition();
            asteroidSprite.setTexture(texture);
            asteroidSprite.setScale(sf::Vector2f(0.1, 0.1));
            asteroidSprite.setPosition(asteroids.getAsteroidsBox()[j].xPos, asteroids.getAsteroidsBox()[j].yPos);
            asteroidSpriteBox.push_back(asteroidSprite);
        }

    }
}
const std::vector<sf::Sprite> &asteroidsGraphic::getAsteroidSpriteBox() const {
    return asteroidSpriteBox;
}

void asteroidsGraphic::setAsteroidSprite(int asteroidIndex) {
    asteroidSpriteBox.erase(asteroidSpriteBox.begin()+asteroidIndex);
}