#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ship.h"
#include "ShipGraphic.h"
#include "shipController.h"
#include "Asteroids.h"
#include "asteroidsGraphic.h"
#include "Board.h"
#include "ShootView.h"
#include "ExtraVittality.h"
#include "ExtraVittalityGraphic.h"
#include "IntroView.h"
#include "IntroController.h"
#include "ScoreView.h"
#include "ScoreController.h"
#include "GameManager.h"
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
    ShootView shootView(shipGraphic);
    //---------EXTRA VITTALITY------------//
    ExtraVittality extraVittality(800,600);
    ExtraVittalityGraphic extraVittalityGraphic(extraVittality, 800,600);
    //----------BOARD-------------------//
    Board board(window,ship,asteroids,shipGraphic,asteroidsGraphic,extraVittality,extraVittalityGraphic,shootView,shipController);
    //----------INTRO--------------------//
    IntroView introView(50, 400,300);
    IntroController introController(introView);
    //------------SCORE-------------------//
    ScoreView scoreView(window,board);
    ScoreController scoreController(scoreView);
    //-----------GAME MANAGER-------------//
    GameManager gameManager(introController, board,scoreController);
    while (window.isOpen()){

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
//        std::cout<<"ship x: "<<ship.getShipPosition().xPos<<"ship y: "<<ship.getShipPosition().yPos<<std::endl;
//        std::cout<<"kometa x: "<<asteroids.getAsteroidPosition().xPos<<"kometa y: "<<asteroids.getAsteroidPosition().yPos<<std::endl;

        gameManager.handleState(window);

        gameManager.draw(window);
        //board.collision();
        //board.draw(window);

        window.display();
    }

    return 0;
}