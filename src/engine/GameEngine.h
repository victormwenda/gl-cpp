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
	void openWindow();
	void drawWindowContent();
	virtual ~GameEngine();
};

#endif /* GAMEENGINE_H_ */
