//============================================================================
// Name        : gl-cpp.cpp
// Author      : Victor Mwenda <vmwenda.vm@gmail.com>
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <GL/glut.h>

using namespace std;

void onDraw() {
	glClearColor(0.2f, 0.9f, 0.6f, 1.0f);
	glClear (GL_COLOR_BUFFER_BIT);
	glFlush();
}

int main(int argc, char **argv) {

	glutInit(&argc, argv);
	glutCreateWindow("Game Window");
	glutDisplayFunc (onDraw);
	glutMainLoop();
	return 0;
}

