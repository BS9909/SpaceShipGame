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
    if(shipPosition.yPos>=0+shipSize/2) {
        if (direction == UP) {
            shipPosition.yPos -= shipSize;
        }
    }
    if(shipPosition.yPos<=high-shipSize*2.5) {
        if(direction==DOWN) {
            shipPosition.yPos += shipSize;
        }
    }
    if(shipPosition.xPos<=3*shipSize) {
        if (direction == RIGHT) {
            shipPosition.xPos += shipSize / 2;
        }
    }
    if(shipPosition.xPos>=shipSize) {

        if (direction == LEFT) {
            shipPosition.xPos -= shipSize / 2;
        }
    }
}
