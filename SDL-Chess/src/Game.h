/*
 * Game.h
 *
 *  Created on: 16.06.2017
 *      Author: Danny
 */

#ifndef GAME_H_
#define GAME_H_
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include "Globals.h"
#include <iostream>

class Game {
public:
	SDL_Rect arraySpriteWhite[16];
	SDL_Rect arraySpriteBlack[16];

	SDL_Window* window = NULL;
	SDL_Renderer* chesRenderer = NULL;

	Game();
	virtual ~Game();

	SDL_Texture* loadTexture(std::string picPath);
	void Render(int x, int y, SDL_Rect* clip = NULL);

	void init();
	void loadMedia();
	void close();
//void renderCut(SDL_Rect &cutRect,SDL_Texture)
	void renderer(SDL_Rect &rect, SDL_Texture* lTexture);
	SDL_Texture*& getBackgroundTxture();
	SDL_Texture*& getButtonTexture();
	SDL_Texture*& getFiguresTexture();

private:

	SDL_Texture* m_backgroundTxture;
	SDL_Texture* m_figuresTexture;
	SDL_Texture* m_buttonTexture;

};

#endif /* GAME_H_ */
