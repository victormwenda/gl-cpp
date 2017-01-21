/*
 * GameEngine.h
 *
 *  Created on: Jan 21, 2017
 *      Author: victor
 */

#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

class GameEngine {
public:
	GameEngine();
	void openWindow(int argc, char **argv);
	void onCreateWindow(const char * windowName);
	void drawWindowContent();
	virtual ~GameEngine();
};

#endif /* GAMEENGINE_H_ */
