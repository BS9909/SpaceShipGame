//
// Created by Bartek on 16.05.2019.
//

#include "ShootController.h"
ShootController::ShootController(ShootView &shootView,sf::RenderWindow &window):shootView(shootView),window(window) {}

void ShootController::controllEvent() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        shootView.draw(window);
    }
}