//
// Created by Bartek on 18.05.2019.
//

#include "ScoreController.h"
ScoreController::ScoreController(ScoreView &scoreView):scoreView(scoreView) {}

void ScoreController::draw(sf::RenderWindow &window) {
    scoreView.draw(window);
}