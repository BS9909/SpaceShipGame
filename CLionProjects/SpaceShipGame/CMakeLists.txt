cmake_minimum_required(VERSION 3.13)
project(SpaceShipGame)

set(CMAKE_CXX_STANDARD 14)

set(SFML_DIR "C:/Users/Bartek/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5.1 COMPONENTS graphics window system)

add_executable(SpaceShipGame main.cpp ShipGraphic.cpp ShipGraphic.h Ship.h Ship.cpp shipController.cpp shipController.h Asteroids.cpp Asteroids.h asteroidsGraphic.cpp asteroidsGraphic.h Board.cpp Board.h ShootView.cpp ShootView.h ExtraVittality.cpp ExtraVittality.h ExtraVittalityGraphic.cpp ExtraVittalityGraphic.h IntroView.cpp IntroView.h GameManager.cpp GameManager.h IntroController.cpp IntroController.h ScoreView.cpp ScoreView.h ScoreController.cpp ScoreController.h)
target_link_libraries(SpaceShipGame sfml-graphics sfml-window sfml-system)