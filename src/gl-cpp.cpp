//============================================================================
// Name        : gl-cpp.cpp
// Author      : Victor Mwenda <vmwenda.vm@gmail.com>
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "engine/GameEngine.h"

using namespace std;

int main(int argc, char **argv) {

	GameEngine gameEngine;
	gameEngine.openWindow(argc,argv);
	gameEngine.drawWindowContent();
	return 0;
}
