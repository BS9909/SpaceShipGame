//
// Created by Bartek on 17.05.2019.
//

#include "ExtraVittality.h"

ExtraVittality::ExtraVittality(int width, int high) {
    this->width = width;
    this->high = high;
    itemBox.push_back({width, rand()%high});
}
void ExtraVittality::setItemPosition() {
    itemBox.push_back({width, rand()%high});
}