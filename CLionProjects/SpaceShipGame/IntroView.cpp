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

    introText.setFont(font);
    introText.setPosition(xPostion-240,yPosition-150);
    introText.setString("Space Ship");
    introText.setCharacterSize(textSize*2.5);
    introText.setFillColor(sf::Color::Blue);
    introText.setOutlineThickness(1);
    introText.setOutlineColor(sf::Color::Cyan);

    easyText.setFont(font);
    easyText.setPosition(xPostion-240,yPosition+100);
    easyText.setString("EASY");
    easyText.setCharacterSize(textSize);
    easyText.setFillColor(sf::Color::Green);

    normalText.setFont(font);
    normalText.setPosition(xPostion-20,yPosition+100);
    normalText.setString("NORMAL");
    normalText.setCharacterSize(textSize);
    normalText.setFillColor(sf::Color::Cyan);

    hardText.setFont(font);
    hardText.setPosition(xPostion+240,yPosition+100);
    hardText.setString("HARD");
    hardText.setCharacterSize(textSize);
    hardText.setFillColor(sf::Color::Red);

    chosenLevelText.setFont(font);
    chosenLevelText.setPosition(xPostion,yPosition+200);
    chosenLevelText.setCharacterSize(textSize);

}
void IntroView::draw(sf::RenderWindow &window) {
    window.draw(startText);
    window.draw(introText);
    window.draw(easyText);
    window.draw(normalText);
    window.draw(hardText);
    window.draw(chosenLevelText);
}