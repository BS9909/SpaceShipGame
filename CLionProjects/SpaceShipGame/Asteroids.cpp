//
// Created by Bartek on 15.05.2019.
//

#include "Asteroids.h"
#include "cstdlib"
#include <ctime>
#include <windows.h>

Asteroids::Asteroids(int width, int high) {
    this->width = width;
    this->high = high;
    gameState = RUNNING;
    asteroidsBox.push_back({width, rand() % high});
}
void Asteroids::setAsteroidPosition() {
    asteroidsBox.push_back({width, rand() % high});
}

void Asteroids::moveAsteroid() {
    for (int i = 0; i < asteroidsBox.size(); ++i) {
        asteroidsBox[i].xPos -=10;
    }
}
void Asteroids::deleteAsteroidPositon() {

}
const sAsteroidPosition &Asteroids::getAsteroidPosition() const {
    return asteroidPosition;
}

const std::vector<sAsteroidPosition> &Asteroids::getAsteroidsBox() const {
    return asteroidsBox;
}
