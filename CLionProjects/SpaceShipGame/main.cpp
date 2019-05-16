#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ship.h"
#include "ShipGraphic.h"
#include "shipController.h"
#include "Asteroids.h"
#include "asteroidsGraphic.h"
#include "Board.h"
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(800,600), "SpaceShipGame");
    sf::Texture backgourndTexture;
    sf::Sprite backgroundSpirte;
    backgourndTexture.loadFromFile("background.jpg");
    backgroundSpirte.setTexture(backgourndTexture);
    sf::Event event;
    //----------OBIEKTY SHIP------------//
    Ship ship(800, 600,50);
    ShipGraphic shipGraphic(ship, 50);
    shipController shipController(ship);
    //----------------------------------//
    //----------OBIEKTY ASTEROID--------//
    Asteroids asteroids(800,600);
    asteroidsGraphic asteroidsGraphic(50,asteroids);
    //----------BOARD-------------------//
    Board board(ship,asteroids,shipGraphic,asteroidsGraphic);
    while (window.isOpen()){

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            shipController.controllEvents(event);
        }

        window.clear();
//        std::cout<<"ship x: "<<ship.getShipPosition().xPos<<"ship y: "<<ship.getShipPosition().yPos<<std::endl;
//        std::cout<<"kometa x: "<<asteroids.getAsteroidPosition().xPos<<"kometa y: "<<asteroids.getAsteroidPosition().yPos<<std::endl;

        //board.collision();
        shipGraphic.draw(window);
        asteroidsGraphic.draw(window);

        window.display();
    }

    return 0;
}