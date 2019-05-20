//
// Created by Bartek on 18.05.2019.
//

#include "IntroView.h"
IntroView::IntroView(int textSize, int xPostion, int yPosition) {
    this->textSize = textSize;
    this->xPostion = xPostion;
    this->yPosition = yPosition;
    font.loadFromFile("arial.ttf");
    startText.setFont(font);
    startText.setPosition(xPostion,yPosition);
    startText.setString("START");
    startText.setCharacterSize(textSize);
    startText.setFillColor(sf::Color::Blue);

}
void IntroView::draw(sf::RenderWindow &window) {
    window.draw(startText);
}