/*
 * Game.h
 *
 *  Created on: 14.06.2017
 *      Author: Danny
 */

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#ifndef GAME_H_
#define GAME_H_
#include "Globals.h"
#include "Button.h"
#include <string>

class Game {
public:

	SDL_Window* ticTacWIndow = NULL;
	SDL_Renderer* ticTacRenderer = NULL;

	SDL_Texture* loadTexture(std::string picPath);

	Game();
	virtual ~Game();

//bool verify(SDL_Rect &verifyRect);

	void init();
	void loadMedia();
	void free();
	void render(SDL_Rect &rectButton,SDL_Texture* newTexture);

	void render(SDL_Rect &from, SDL_Rect &to,SDL_Texture* whatTexture);
	 SDL_Texture*& getBackGroundTexture();
	 SDL_Texture*& getTextureX();
	 SDL_Texture*& getTextureY();

private:


	SDL_Texture* m_BackGroundTexture;
	SDL_Texture* m_TextureX;
	SDL_Texture* m_TextureY;
};

#endif /* GAME_H_ */
