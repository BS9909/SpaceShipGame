//
// Created by Bartek on 18.05.2019.
//
#include "Board.h"
#include "IntroController.h"
#include "ScoreController.h"
#ifndef SPACESHIPGAME_GAMEMANAGER_H
#define SPACESHIPGAME_GAMEMANAGER_H

enum GameState{INTRO, GAME, SCORE};
class GameManager {
    GameState  gameState;
    Board &board;
    IntroController &introController;
    ScoreController &scoreController;
public:
    GameManager(IntroController &introController, Board &board, ScoreController &scoreController);
    void updateStte();
    void draw(sf::RenderWindow &window);
    void handleState(sf::RenderWindow &window);
};


#endif //SPACESHIPGAME_GAMEMANAGER_H
