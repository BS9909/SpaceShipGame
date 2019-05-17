//
// Created by Bartek on 16.05.2019.
//
#include "Ship.h"
#include <SFML/Graphics.hpp>
#ifndef SPACESHIPGAME_SHOOT_H
#define SPACESHIPGAME_SHOOT_H

struct sBulletPosition{
    int xPos,yPos;
};
class Shoot {
    Ship &ship;
    sBulletPosition bulletPosition;
public:
    const sBulletPosition &getBulletPosition() const;
    Shoot(Ship &ship);
    void setBuletPosition();
    void moveBullet();

};


#endif //SPACESHIPGAME_SHOOT_H
