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
    std::vector<sAsteroidPosition> asteroidsBox;
    int width,high;
public:
    const std::vector<sAsteroidPosition> &getAsteroidsBox() const;
    Asteroids(int width, int high);
    void setAsteroidPosition();
};


#endif //SPACESHIPGAME_ASTEROIDS_H
