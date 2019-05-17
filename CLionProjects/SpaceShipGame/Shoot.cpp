//
// Created by Bartek on 16.05.2019.
//

#include "Shoot.h"

Shoot::Shoot(Ship &ship):ship(ship) {
    setBuletPosition();
}

void Shoot::setBuletPosition() {
    bulletPosition.xPos = ship.getShipPosition().xPos;
    bulletPosition.yPos = ship.getShipPosition().yPos;
}

const sBulletPosition &Shoot::getBulletPosition() const {
    return bulletPosition;
}
