//
// Created by Bartek on 15.05.2019.
//

#include "Asteroids.h"
#include "cstdlib"
#include <ctime>

Asteroids::Asteroids(int width, int high) {
    this->width = width;
    this->high = high;
    setAsteroidPosition();
}
void Asteroids::setAsteroidPosition() {
    srand(time(NULL));
    asteroidPosition.xPos = width;
    asteroidPosition.yPos = rand()%high;
}
void Asteroids::moveAsteroid() {
    asteroidPosition.xPos -=1;
}

const sAsteroidPosition &Asteroids::getAsteroidPosition() const {
    return asteroidPosition;
}
