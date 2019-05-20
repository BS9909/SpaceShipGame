//
// Created by Bartek on 15.05.2019.
//

#include "Board.h"
#include <iostream>
#include <windows.h>

Board::Board(sf::RenderWindow &window,Ship &ship, Asteroids &asteroids,ShipGraphic &shipGraphic,asteroidsGraphic &asteroidsGraphic1, ExtraVittality &extraVittality, ExtraVittalityGraphic &extraVittalityGraphic, ShootView &shootView,shipController &shipController1):
window(window),
ship(ship),
asteroids(asteroids),
shipGraphic(shipGraphic),
asteroidsGraphic1(asteroidsGraphic1),
extraVittality(extraVittality),
extraVittalityGraphic(extraVittalityGraphic),
shootView(shootView),
shipController1(shipController1)
{
    isFinished = false;
    timer = 0;

}
void Board::collision() {
    timer ++;
    shipController1.controllEvents();
    for (int i = 0; i < asteroidsGraphic1.getAsteroidSpriteBox().size(); ++i) {
        if (shipGraphic.getShipSprite().getGlobalBounds().intersects(
                asteroidsGraphic1.getAsteroidSpriteBox()[i].getGlobalBounds())) {
            asteroidsGraphic1.setAsteroidSprite(i);
            ship.setHP(-5);
        }
    }
    for (int j = 0; j < extraVittalityGraphic.getItemSpriteBox().size(); ++j) {
        if (shipGraphic.getShipSprite().getGlobalBounds().intersects(
                extraVittalityGraphic.getItemSpriteBox()[j].getGlobalBounds())) {
            extraVittalityGraphic.setItemSprite(j);
            ship.setHP(1);
        }
    }
    for (int j = 0; j <shootView.getBulletSpriteBox().size(); ++j) {
        if (asteroidsGraphic1.getAsteroidSpriteBox()[j].getGlobalBounds().intersects(
                shootView.getBulletSpriteBox()[j].getGlobalBounds())) {
            shootView.deleteSprite(j);
            asteroidsGraphic1.setAsteroidSprite(j);
        }
    }
    if (ship.getHP() <= 0) {
        isFinished = true;
    }
}
void Board::draw(sf::RenderWindow &window) {
    shipGraphic.draw(window);
    asteroidsGraphic1.draw(window);
    extraVittalityGraphic.draw(window);
    shootView.draw(window);
}
