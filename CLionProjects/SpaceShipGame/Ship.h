//
// Created by Bartek on 15.05.2019.
//

#ifndef SPACESHIPGAME_SHIP_H
#define SPACESHIPGAME_SHIP_H

struct sShipPosition{
    int xPos;
    int yPos;
};
class Ship {
    int width;
    int high;
    sShipPosition shipPosition;
    int shipSize;
    int HP;
public:
    Ship(int width, int high,int shipSize);
    void setShipPosition();
    const sShipPosition &getShipPosition() const;
    const int getHigh() const {return high;}
    const int getWidth() const {return width;}
    const int getShipSize() const { return shipSize;}
    int getHP(){return HP;}
    void setHP(int newHP){HP += newHP;}
};


#endif //SPACESHIPGAME_SHIP_H