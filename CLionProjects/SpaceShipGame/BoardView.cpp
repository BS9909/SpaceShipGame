//
// Created by Bartek on 18.05.2019.
//

#include "BoardView.h"
BoardView::BoardView(Board &board):board(board) {
    font.loadFromFile("arial.ttf");
    scoreText.setFont(font);
    scoreText.setPosition(0,0);
    scoreText.setOutlineThickness(-1);
    scoreText.setOutlineColor(sf::Color::Cyan);
    scoreText.setScale(1,1);
}
void BoardView::draw(sf::RenderWindow &window) {
    scoreText.setString("HP: " + board.getScore());
    window.draw(scoreText);
}