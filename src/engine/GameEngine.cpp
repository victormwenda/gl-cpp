/*
 * GameEngine.cpp
 *
 *  Created on: Jan 21, 2017
 *      Author: victor
 */

#include <iostream>

#include "GameEngine.h"

using namespace std;

GameEngine::GameEngine() {
	std::cout << "Creating game engine" << std::endl;
}
void GameEngine::openWindow() {
	std::cout << "Open game window" << std::endl;
}
void GameEngine::drawWindowContent() {
	std::cout << "Drawing window content" << std::endl;
}
GameEngine::~GameEngine() {
	std::cout << "Closing game engine" << std::endl;
}

