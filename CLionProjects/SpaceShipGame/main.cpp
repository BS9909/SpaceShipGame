#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ship.h"
#include "ShipGraphic.h"
#include "shipController.h"
#include "Asteroids.h"
#include "asteroidsGraphic.h"
#include "Board.h"
#include "Shoot.h"
#include "ShootView.h"
#include "ShootController.h"
#include "ExtraVittality.h"
#include "ExtraVittalityGraphic.h"
#include "BoardView.h"
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
    ShipGraphic shipGraphic(ship,50);
    shipController shipController(ship,shipGraphic);
    //----------------------------------//
    //----------OBIEKTY ASTEROID--------//
    Asteroids asteroids(800,600);
    asteroidsGraphic asteroidsGraphic(50,asteroids, 800, 600);

    //----------SHOOT--------------------//IN PROGRESS XD
//    Shoot shoot(ship);
//    ShootView shootView(shoot);
//    ShootController shootController(shootView,window);
    //---------EXTRA VITTALITY------------//
    ExtraVittality extraVittality(800,600);
    ExtraVittalityGraphic extraVittalityGraphic(extraVittality);
    //----------BOARD-------------------//
    Board board(window,ship,asteroids,shipGraphic,asteroidsGraphic,extraVittality,extraVittalityGraphic);
    BoardView boardView(board);
    while (window.isOpen()){

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            shipController.controllEvents(event);

        }

        window.clear();
//        std::cout<<"ship x: "<<ship.getShipPosition().xPos<<"ship y: "<<ship.getShipPosition().yPos<<std::endl;
//        std::cout<<"kometa x: "<<asteroids.getAsteroidPosition().xPos<<"kometa y: "<<asteroids.getAsteroidPosition().yPos<<std::endl;

        board.collision();
        //shootController.controllEvent();

        shipGraphic.draw(window);
        asteroidsGraphic.draw(window);
        extraVittalityGraphic.draw(window);
        boardView.draw(window);

        window.display();
    }

    return 0;
}