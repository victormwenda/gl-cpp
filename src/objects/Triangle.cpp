/*
 * Triangle.cpp
 *
 *  Created on: Jan 22, 2017
 *      Author: victor
 */
#include <iostream>
#include "Triangle.h"
#include "GL/glut.h"

using namespace std;

class Triangle {

	Triangle::Triangle() {

	}
	void Triangle::drawTriangle() {

		GLfloat vertices[] = { -0.5f, -0.5f, 0.0f, 0.5f, -0.5f, 0.0f, 0.5f,
				0.5f, 0.0f };

		GLuint vertextBuffer;
		GLuint vertextArray;

		glGenVertextArrays(1,&vertextArray);
		glGenBuffers(1&vertextBuffer);

		glBindVertextArr
	}
	Triangle::~Triangle() {

	}

};
