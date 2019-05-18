//
// Created by Bartek on 15.05.2019.
//

#include "ShipGraphic.h"


ShipGraphic::ShipGraphic(Ship &ship, int shipSize):ship(ship) {
    this->shipSize = shipSize;
    texture.loadFromFile("ship.jpg");
    boomTexture.loadFromFile("boom.jpg");
    shipSprite.setTexture(texture);
    shipSprite.setScale(0.2,0.2);
    shipSprite.setPosition(ship.getShipPosition().xPos,ship.getShipPosition().yPos);
}

void ShipGraphic::draw(sf::RenderWindow &window) {
    if(shipSprite.getPosition().y >= 0) {
        if (direction == UP) {
            shipSprite.move(sf::Vector2f(0, -0.5));
        }
    }
    if(shipSprite.getPosition().y <= ship.getHigh()-ship.getShipSize()*1.3) {

        if (direction == DOWN) {
            shipSprite.move(sf::Vector2f(0, 0.5));
        }
    }
    if(shipSprite.getPosition().x <= ship.getShipSize()*3) {
        if (direction == RIGHT) {
            shipSprite.move(sf::Vector2f(0.5, 0));
        }
    }
    if(shipSprite.getPosition().x >= ship.getShipSize()) {
        if (direction == LEFT) {
            shipSprite.move(sf::Vector2f(-0.5, 0));
        }
    }
    window.draw(shipSprite);
}

const sf::RectangleShape &ShipGraphic::getShipRectangle() const {
    return shipRectangle;
}

const sf::Sprite &ShipGraphic::getShipSprite() const {
    return shipSprite;
}
void ShipGraphic::setNewTexture(sf::RenderWindow &window) {
    shipSprite.setTexture(boomTexture);
    shipSprite.setScale(1,1);
    window.draw(shipSprite);
}
