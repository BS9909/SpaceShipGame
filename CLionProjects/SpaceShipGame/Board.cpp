//
// Created by Bartek on 15.05.2019.
//

#include "Board.h"
#include <iostream>

Board::Board(sf::RenderWindow &window,Ship &ship, Asteroids &asteroids,ShipGraphic &shipGraphic,asteroidsGraphic &asteroidsGraphic1, ExtraVittality &extraVittality, ExtraVittalityGraphic &extraVittalityGraphic):
window(window),
ship(ship),
asteroids(asteroids),
shipGraphic(shipGraphic),
asteroidsGraphic1(asteroidsGraphic1),
extraVittality(extraVittality),
extraVittalityGraphic(extraVittalityGraphic)
{
    gameState = RUNNING;
    score = 5;
}
void Board::collision() {
    for (int i = 0; i < asteroidsGraphic1.getAsteroidSpriteBox().size(); ++i) {
        if (shipGraphic.getShipSprite().getGlobalBounds().intersects(
                asteroidsGraphic1.getAsteroidSpriteBox()[i].getGlobalBounds())) {
            asteroidsGraphic1.setAsteroidSprite(i);
            score--;
        }
    }
    for (int j = 0; j < extraVittalityGraphic.getItemSpriteBox().size(); ++j) {
        if (shipGraphic.getShipSprite().getGlobalBounds().intersects(
                extraVittalityGraphic.getItemSpriteBox()[j].getGlobalBounds())) {
            extraVittalityGraphic.setItemSprite(j);
            score++;
        }
        if (score == 0) {
            gameState = FINISHED_LOOSE;
            shipGraphic.setNewTexture(window);
        }
    }
}
