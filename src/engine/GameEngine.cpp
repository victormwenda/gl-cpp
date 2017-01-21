/*
 * GameEngine.cpp
 *
 *  Created on: Jan 21, 2017
 *      Author: victor
 */

#include <iostream>
#include <GL/glut.h>
#include "GameEngine.h"

using namespace std;

GameEngine::GameEngine() {
	std::cout << "Creating game engine" << std::endl;
}
void GameEngine::openWindow(int argc, char **argv) {
	std::cout << "Open game window" << std::endl;
	glutInit(&argc, argv);
	glutCreateWindow("Game Window");
	glutDisplayFunc(drawWindowContent);
	glutMainLoop();
}
void GameEngine::drawWindowContent() {
	std::cout << "Drawing window content" << std::endl;
	glClearColor(0.2f, 0.9f, 0.6f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glFlush();
}
GameEngine::~GameEngine() {
	std::cout << "Closing game engine" << std::endl;
}

