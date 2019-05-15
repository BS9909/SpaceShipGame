//
// Created by Bartek on 15.05.2019.
//

#include "ShipGraphic.h"

ShipGraphic::ShipGraphic(Ship &ship, int shipSize):ship(ship)
{
    this->shipSize = shipSize;
    texture.loadFromFile("head.jpg");
}

void ShipGraphic::draw(sf::RenderWindow &window) {
    shipSprite.setTexture(texture);
    shipSprite.setPosition(ship.getShipPosition().xPos,ship.getShipPosition().yPos);

    window.draw(shipSprite);
}

const sf::RectangleShape &ShipGraphic::getShipRectangle() const {
    return shipRectangle;
}

const sf::Sprite &ShipGraphic::getShipSprite() const {
    return shipSprite;
}
