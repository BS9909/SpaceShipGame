
//
// Created by Bartek on 15.05.2019.
//

#include "Ship.h"

Ship::Ship(int width, int high, int shipSize) {
    this->width = width;
    this->high = high;
    this->shipSize = shipSize;
    HP = 15;
    setShipPosition();
}
void Ship::setShipPosition() {
    shipPosition.xPos = shipSize*2;
    shipPosition.yPos = shipSize*3;
}
const sShipPosition &Ship::getShipPosition() const {
    return shipPosition;
}
