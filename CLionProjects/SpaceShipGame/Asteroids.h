//
// Created by Bartek on 15.05.2019.
//
#include <vector>
#include <iostream>
#ifndef SPACESHIPGAME_ASTEROIDS_H
#define SPACESHIPGAME_ASTEROIDS_H

struct sAsteroidPosition{
    int xPos,yPos;
};
class Asteroids {
    sAsteroidPosition asteroidPosition;
    std::vector<sAsteroidPosition> asteroidsBox;
    int width,high;
public:
    Asteroids(int width, int high);
    void setAsteroidPosition();
    void moveAsteroid();
    const sAsteroidPosition &getAsteroidPosition() const;
};


#endif //SPACESHIPGAME_ASTEROIDS_H
