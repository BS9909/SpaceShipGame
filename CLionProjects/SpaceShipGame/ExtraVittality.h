//
// Created by Bartek on 17.05.2019.
//
#include <iostream>
#include <vector>
#ifndef SPACESHIPGAME_EXTRAVITTALITY_H
#define SPACESHIPGAME_EXTRAVITTALITY_H

struct sItemPosition{
    int xPos, yPos;
};
class ExtraVittality {
    std::vector<sItemPosition> itemBox;
    int width,high;
public:
    ExtraVittality(int width, int high);
    void setItemPosition();
    const std::vector<sItemPosition> &getItemBox() const{return itemBox;}
};


#endif //SPACESHIPGAME_EXTRAVITTALITY_H
