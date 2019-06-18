//
// Created by Bartek on 17.05.2019.
//

#include "ExtraVittalityGraphic.h"
ExtraVittalityGraphic::ExtraVittalityGraphic(ExtraVittality &extraVittality,int width, int high):extraVittality(extraVittality) {
    this->width = width;
    this->high = high;
    itemTexture.loadFromFile("fuel.jpg");
    itemSprite.setTexture(itemTexture);
    itemSprite.setScale(0.2,0.2);
    itemSprite.setPosition(extraVittality.getItemBox()[0].xPos, extraVittality.getItemBox()[0].yPos);
    itemSpriteBox.push_back(itemSprite);
}
void ExtraVittalityGraphic::draw(sf::RenderWindow &window) {
    for (int i = 0; i < itemSpriteBox.size(); ++i) {
        itemSpriteBox[i].move(sf::Vector2f(-0.5,0));
        window.draw(itemSpriteBox[i]);
    }if(itemSpriteBox.size()>4) {
        for (int j = 0; j < itemSpriteBox.size(); ++j) {
            if (itemSpriteBox[j].getPosition().x == -50)
                itemSpriteBox[j].setPosition(width, rand() % high);
        }
    }else {
        generateNewItem();
    }
}
void ExtraVittalityGraphic::generateNewItem() {
    for (int i = 0; i < itemSpriteBox.size(); ++i) {
        if(itemSpriteBox[i].getPosition().x == 300){
            extraVittality.setItemPosition();
            itemSprite.setTexture(itemTexture);
            itemSprite.setScale(0.2,0.2);
            itemSprite.setRotation(rand()&360);
            itemSprite.setPosition(extraVittality.getItemBox()[i].xPos, extraVittality.getItemBox()[i].yPos);
            itemSpriteBox.push_back(itemSprite);
        }
    }
}
void ExtraVittalityGraphic::setItemSprite(int itemBoxIndeks) {
    itemSpriteBox.erase(itemSpriteBox.begin()+itemBoxIndeks);
}
const std::vector<sf::Sprite> &ExtraVittalityGraphic::getItemSpriteBox() const {
    return itemSpriteBox;
}
