//
// Created by Bartek on 15.05.2019.
//

#ifndef SPACESHIPGAME_SHIP_H
#define SPACESHIPGAME_SHIP_H

struct sShipPosition{
    int xPos;
    int yPos;
};
enum Direction{UP,DOWN, LEFT, RIGHT};
class Ship {
    int width;
    int high;
    sShipPosition shipPosition;
    Direction direction;
    int shipSize;
public:
    Ship(int width, int high,int shipSize);
    void setShipPosition();
    const sShipPosition &getShipPosition() const;
    void shipMove();
    void setDirection(Direction direction1){direction = direction1;}
};


#endif //SPACESHIPGAME_SHIP_H
