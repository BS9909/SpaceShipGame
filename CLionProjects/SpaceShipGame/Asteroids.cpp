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
    asteroidsBox.push_back({width, rand() % high});
}
void Asteroids::setAsteroidPosition() {
    asteroidsBox.push_back({width, rand() % high});
}
const std::vector<sAsteroidPosition> &Asteroids::getAsteroidsBox() const {
    return asteroidsBox;
}
