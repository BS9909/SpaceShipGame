//
// Created by Bartek on 18.05.2019.
//

#include "ScoreController.h"
ScoreController::ScoreController(ScoreView &scoreView,Ship &ship,Board &board,asteroidsGraphic &asteroidsGraphic1,IntroController &introController):
scoreView(scoreView),
ship(ship),
board(board),
asteroidsGraphic1(asteroidsGraphic1),
introController(introController)
{isFinished = false;}

void ScoreController::draw(sf::RenderWindow &window) {
    scoreView.draw(window);
}
void ScoreController::controllEvent() {
    auto mouse_position = sf::Mouse::getPosition(scoreView.getWindow());
    auto translated_pos = scoreView.getWindow().mapPixelToCoords(mouse_position);
    if (scoreView.getPlayAgainText().getGlobalBounds().contains(translated_pos)) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
            isFinished = true;
            ship.resetHP();
            board.resetFinishBoard();
            board.resetTimer();
            introController.resetFinishedIntro();
        }
    }
}
