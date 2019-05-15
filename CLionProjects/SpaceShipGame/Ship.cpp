//
// Created by Bartek on 15.05.2019.
//

#include "Ship.h"

Ship::Ship(int width, int high, int shipSize) {
    this->width = width;
    this->high = high;
    this->shipSize = shipSize;
    setShipPosition();
}
void Ship::setShipPosition() {
    shipPosition.xPos = shipSize*2;
    shipPosition.yPos = shipSize*3;
}
const sShipPosition &Ship::getShipPosition() const {
    return shipPosition;
}
void Ship::shipMove() {
    if(shipPosition.yPos>=0) {
        if (direction == UP) {
            shipPosition.yPos -= shipSize;
        }
    }
    if(shipPosition.yPos<=high) {
        if(direction==DOWN) {
            shipPosition.yPos += shipSize;
        }
    }
}
