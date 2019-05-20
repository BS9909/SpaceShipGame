//
// Created by Bartek on 18.05.2019.
//

#include "ScoreView.h"
ScoreView::ScoreView(sf::RenderWindow &window, Board &board):window(window),board(board) {
    font.loadFromFile("arial.ttf");
    gameOverText.setFont(font);
    gameOverText.setString("GAME OVER");
    gameOverText.setCharacterSize(100);
    gameOverText.setPosition(100, 100);
    gameOverText.setOutlineThickness(-2);
    gameOverText.setOutlineColor(sf::Color::Blue);
    gameOverText.setFillColor(sf::Color::Black);

    textScore.setFont(font);
    textScore.setCharacterSize(100);
    textScore.setPosition(90, 400);
    textScore.setOutlineThickness(2);
    textScore.setOutlineColor(sf::Color::Blue);
    textScore.setFillColor(sf::Color::Black);

    playAgainText.setFont(font);
    playAgainText.setCharacterSize(100);
    playAgainText.setPosition(160, 250);
    playAgainText.setOutlineThickness(2);
    playAgainText.setOutlineColor(sf::Color::Red);
    playAgainText.setFillColor(sf::Color::Black);
    playAgainText.setString("Play Again");
}
void ScoreView::draw(sf::RenderWindow &window1) {
    textScore.setString("Score: " + board.getTimer() );
    window1.draw(gameOverText);
    window1.draw(textScore);
    window1.draw(playAgainText);
}

const sf::Text &ScoreView::getPlayAgainText() const {
    return playAgainText;
}

sf::RenderWindow &ScoreView::getWindow() const {
    return window;
}
