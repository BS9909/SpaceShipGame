//
// Created by Bartek on 15.05.2019.
//

#include "asteroidsGraphic.h"
#include <windows.h>

asteroidsGraphic::asteroidsGraphic(int asteroidSize, Asteroids &asteroids):
asteroids(asteroids)
{
    this->asteroidSize = asteroidSize;
    texture.loadFromFile("asteroid.png");
    asteroidSprite.setTexture(texture);
    asteroidSprite.setScale(sf::Vector2f(0.1,0.1));
    asteroidSprite.setPosition(asteroids.getAsteroidsBox()[0].xPos,asteroids.getAsteroidsBox()[0].yPos);
    asteroidSpriteBox.push_back(asteroidSprite);
}
void asteroidsGraphic::draw(sf::RenderWindow &window) {

    std::cout<<"Vector Spritow: "<<asteroidSpriteBox.size()<<std::endl;
    std::cout<<"Vector pozycji: "<<asteroids.getAsteroidsBox().size()<<std::endl;

    for (int i = 0; i <asteroidSpriteBox.size() ; ++i) {
        asteroidSpriteBox[i].move(sf::Vector2f(-0.1,0));
        window.draw(asteroidSpriteBox[i]);
    }

    generateNewAsteroid();

}
void asteroidsGraphic::generateNewAsteroid() {
    for (int j = 0; j < asteroidSpriteBox.size(); ++j) {
        if (asteroidSpriteBox[j].getPosition().x == 500) {
            asteroids.setAsteroidPosition();
            asteroidSprite.setPosition(asteroids.getAsteroidsBox()[j+1].xPos,asteroids.getAsteroidsBox()[j+1].yPos);
            asteroidSpriteBox.push_back(asteroidSprite);
        }
    }
}
const std::vector<sf::Sprite> &asteroidsGraphic::getAsteroidSpriteBox() const {
    return asteroidSpriteBox;
}
