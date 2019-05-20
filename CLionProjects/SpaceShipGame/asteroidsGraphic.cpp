//
// Created by Bartek on 15.05.2019.
//

#include "asteroidsGraphic.h"
#include <cmath>
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
    timer = 0;
    asteroidsAmount = 0; //Od delay zależy ilość komet na planszy
    speed = 0;
}
void asteroidsGraphic::draw(sf::RenderWindow &window) {
    //Kontrola wielkosci vectorów
    //std::cout << "Vector Spritow: " << asteroidSpriteBox.size() << std::endl;
    //std::cout << "Vector pozycji: " << asteroids.getAsteroidsBox().size() << std::endl;
    std::cout<<asteroidSpriteBox[0].getPosition().x<<std::endl;

    elapseTime = clock.getElapsedTime().asSeconds();
    timer += elapseTime;
    clock.restart();

    for (int i = 0; i < asteroidSpriteBox.size(); ++i) {
            asteroidSpriteBox[i].move(speed, 0);//Od tej linii kodu zależy prędkość poruszających się komet
            window.draw(asteroidSpriteBox[i]);

    }
    if(asteroidSpriteBox.size()>4) {
        for (int j = 0; j < asteroidSpriteBox.size(); ++j) {
            if (asteroidSpriteBox[j].getPosition().x == -50) {
                asteroidSpriteBox[j].setPosition(width, rand() % high);
                timer = 0;
            }
        }
    }else {
        generateNewAsteroid();
    }
}
void asteroidsGraphic::generateNewAsteroid() {
    for (int j = 0; j < asteroidSpriteBox.size(); ++j) {
        if (timer > asteroidsAmount) {
            asteroids.setAsteroidPosition();
            asteroidSprite.setTexture(texture);
            asteroidSprite.setScale(sf::Vector2f(0.1, 0.1));
            asteroidSprite.setPosition(width, rand() % high);
            asteroidSpriteBox.push_back(asteroidSprite);
            timer = 0;
        }
    }

}
const std::vector<sf::Sprite> &asteroidsGraphic::getAsteroidSpriteBox() const {
    return asteroidSpriteBox;
}

void asteroidsGraphic::setAsteroidSprite(int asteroidIndex) {
    asteroidSpriteBox.erase(asteroidSpriteBox.begin()+asteroidIndex);
}