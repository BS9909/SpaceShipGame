//
// Created by Bartek on 16.05.2019.
//

#include "ShootView.h"

ShootView::ShootView(Shoot &shoot):shoot(shoot) {
    bulletTexture.loadFromFile("bullet.jpg");
    bulletSprite.setTexture(bulletTexture);
    bulletSprite.setScale(sf::Vector2f(0.1,0.1));
    bulletSprite.setPosition(shoot.getBulletPosition().xPos,shoot.getBulletPosition().yPos);
}
void ShootView::draw(sf::RenderWindow &window) {
    bulletSprite.move(sf::Vector2f(1,0));
    window.draw(bulletSprite);
}