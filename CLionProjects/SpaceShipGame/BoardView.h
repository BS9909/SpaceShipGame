//
// Created by Bartek on 18.05.2019.
//
#include <SFML/Graphics.hpp>
#include "Board.h"
#ifndef SPACESHIPGAME_BOARDVIEW_H
#define SPACESHIPGAME_BOARDVIEW_H


class BoardView {
    Board &board;
    sf::Text scoreText;
    sf::Font font;
public:
    BoardView(Board &board);
    void draw(sf::RenderWindow &window);

};


#endif //SPACESHIPGAME_BOARDVIEW_H
