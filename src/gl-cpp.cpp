//============================================================================
// Name        : gl-cpp.cpp
// Author      : Victor Mwenda <vmwenda.vm@gmail.com>
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <GL/glut.h>
#include "engine/GameEngine.h"

using namespace std;

GameEngine gameEngine;
const char * windowName = "Game Window";

void onDraw() {
	glClearColor(0.2f, 0.9f, 0.6f, 1.0f);
	glClear (GL_COLOR_BUFFER_BIT);
	gameEngine.drawWindowContent();
	glFlush();
}


int main(int argc, char **argv) {
	glutInit(&argc, argv);
	gameEngine.openWindow(argc,argv);
	glutCreateWindow(windowName);
	gameEngine.onCreateWindow(windowName);
	glutDisplayFunc (onDraw);
	glutMainLoop();
	gameEngine.~GameEngine();
	return 0;
}

