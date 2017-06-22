/*
 * Project.h
 *
 *  Created on: 21.06.2017
 *      Author: Danny
 */
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <string>
#include <iostream>
#include "Globals.h"
//#Include

#ifndef PROJECT_H_
#define PROJECT_H_
#include <string>
#include <vector>

class Project {
public:

	TTF_Font* songName = NULL;
	SDL_Window* myWindow = NULL;
	SDL_Renderer* myRenderer = NULL;
	Mix_Music* mySong = NULL;

	Project();
	virtual ~Project();
	void freeTextTexture();
//void playNextSong();
	void freeTexture(SDL_Texture* textureToDestroy);
	void free();
	bool init();
	bool loadMedia();
	void close();
	void backgroundRender(SDL_Texture* texture);
	void textRender(int x, int y, SDL_Texture* textureText);
	void buttonRender(int x, int y, SDL_Texture* texture);
	bool isClicked(int x, int y);
	SDL_Texture* loadTexture(std::string picPath);
	void LoadFromRenderedText(std::string textureText, SDL_Color textColor);

	SDL_Texture*& getPlayButtonTexture();
	SDL_Texture*& getStopButtonTexture();
	SDL_Texture*& getPlaySecondButtonTexture();
	SDL_Texture*& getStopSecondButtonTextures();
	SDL_Texture*& getBackground();
	SDL_Texture*& getNextButtonTexture();
	SDL_Texture*& getPreviousButtonTexture();
	SDL_Texture*& getTextTexture();

private:
	SDL_Texture* m_background;
	SDL_Texture* m_PlaySecondButtonTexture;
	SDL_Texture* m_PlayButtonTexture;
	SDL_Texture* m_StopButtonTexture;
	SDL_Texture* m_StopSecondButtonTextures;
	SDL_Texture* m_NextButtonTexture;
	SDL_Texture* m_PreviousButtonTexture;
	SDL_Texture* m_TextTexture;
};

#endif /* PROJECT_H_ */
