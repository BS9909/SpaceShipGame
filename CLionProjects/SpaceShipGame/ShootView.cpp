//
// Created by Bartek on 16.05.2019.
//

#include "ShootView.h"
#include <vector>

ShootView::ShootView(ShipGraphic &shipGraphic):shipGraphic(shipGraphic) {
    bulletTexture.loadFromFile("bullet.jpg");
    bulletSprite.setTexture(bulletTexture);
    bulletSprite.setScale(sf::Vector2f(0.05,0.05));
    bulletSpriteBox.push_back(bulletSprite);
    delay = 0.4;
}
void ShootView::draw(sf::RenderWindow &window) {
    elapseTime = clock.getElapsedTime().asSeconds();
    timer += elapseTime;
    clock.restart();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)&&timer > delay) {
        bulletSprite.setPosition(shipGraphic.getShipPosition().getPosition().x+50,shipGraphic.getShipPosition().getPosition().y);
        bulletSpriteBox.push_back(bulletSprite);
        timer = 0;
    }
    for (int i = 1; i < bulletSpriteBox.size(); ++i) {
        bulletSpriteBox[i].move(sf::Vector2f(1,0));
        window.draw(bulletSpriteBox[i]);
    }
    for (int j = 0; j < bulletSpriteBox.size(); ++j) {
        if (bulletSpriteBox[j].getPosition().x == 1000) {
            bulletSpriteBox.erase(bulletSpriteBox.begin() + j);
        }
    }

}
void ShootView::deleteSprite(int deleteIndeks) {
    bulletSpriteBox.erase(bulletSpriteBox.begin()+deleteIndeks                                                                    );
}
const std::vector<sf::Sprite> &ShootView::getBulletSpriteBox() const {
    return bulletSpriteBox;
}
