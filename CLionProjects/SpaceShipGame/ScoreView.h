//
// Created by Bartek on 18.05.2019.
//
#include <SFML/Graphics.hpp>
#include "Board.h"
#ifndef SPACESHIPGAME_SCOREVIEW_H
#define SPACESHIPGAME_SCOREVIEW_H


class ScoreView {
    Board &board;
    sf::Text textScore, gameOverText;
    sf::Font font;
    sf::RenderWindow &window;
public:
    ScoreView(sf::RenderWindow &window, Board &board);
    void draw(sf::RenderWindow &window1);

};


#endif //SPACESHIPGAME_SCOREVIEW_H
