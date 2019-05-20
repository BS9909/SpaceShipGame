//
// Created by Bartek on 18.05.2019.
//
#include <SFML/Graphics.hpp>
#include "Board.h"
#ifndef SPACESHIPGAME_SCOREVIEW_H
#define SPACESHIPGAME_SCOREVIEW_H


class ScoreView {
    Board &board;
    sf::Font font;
    sf::Text textScore, gameOverText, playAgainText;
    sf::RenderWindow &window;
public:
    sf::RenderWindow &getWindow() const;
    const sf::Text &getPlayAgainText() const;
    ScoreView(sf::RenderWindow &window, Board &board);
    void draw(sf::RenderWindow &window1);

};


#endif //SPACESHIPGAME_SCOREVIEW_H
