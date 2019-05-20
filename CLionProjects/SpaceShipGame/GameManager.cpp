//
// Created by Bartek on 18.05.2019.
//

#include "GameManager.h"
#include <windows.h>
GameManager::GameManager(IntroController &introController, Board &board,ScoreController &scoreController):board(board),
introController(introController),
scoreController(scoreController)
{
    gameState = INTRO;
}
void GameManager::updateStte() {
    switch (gameState){
        case INTRO:
            if(introController.getIsFinished())
                gameState = GAME;
            break;
        case GAME:
            if(board.getIsFinished())
                gameState = SCORE;
            break;
        case SCORE:
            if (scoreController.getisFinished()) {
                gameState = INTRO;
                scoreController.resetFinished();
            }
            break;
    }
}
void GameManager::handleState(sf::RenderWindow &window) {
    updateStte();
    switch (gameState){
        case INTRO:
            introController.controllEvents(window);
            break;
        case GAME:
            board.collision();
            break;
        case SCORE:
            scoreController.controllEvent();
            break;
    }
}
void GameManager::draw(sf::RenderWindow &window) {
    updateStte();
    switch (gameState){
        case INTRO:
            introController.draw(window);
            break;
        case GAME:
            board.draw(window);
            break;
        case SCORE:
            scoreController.draw(window);
    }
}