//
// Created by Bartek on 18.05.2019.
//
#include <SFML/Graphics.hpp>
#ifndef SPACESHIPGAME_INTROVIEW_H
#define SPACESHIPGAME_INTROVIEW_H


class IntroView {
    sf::Text startText;
    sf::Font font;
    int textSize,xPostion,yPosition;
public:
    IntroView(int textSize, int xPostion, int yPosition);
    void draw(sf::RenderWindow &window);
    const sf::Text getText()const { return startText;}

};


#endif //SPACESHIPGAME_INTROVIEW_H
