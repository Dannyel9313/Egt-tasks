//============================================================================
// Name        : SDL-colorKeying.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <iostream>
#include "LTexture.h"
using namespace std;

const int screen_width = 640;
const int screen_height = 480;

bool init();
bool loadMedia();
void close();

SDL_Window* gWindow = NULL;

//SDL_Renderer* gRenderer = NULL;
LTexture gRenderer;
LTexture gFooTexture;
LTexture gBackgroundTexture;

bool init() {
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cerr << "SDL could not initialized !" << std::endl;
		success = false;
	} else {
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
			std::cerr << "linear structure is enabled" << endl;
			success = false;
		} else {
			gWindow = SDL_CreateWindow("Choweche", SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height,
					SDL_WINDOW_SHOWN);
			if (gWindow == NULL) {
				std::cerr << "windows can not be created !" << endl;
				success = false;
			} else {
				gRenderer.gRenderer = SDL_CreateRenderer(gWindow, -1,
						SDL_RENDERER_ACCELERATED);
				if (gRenderer.gRenderer == NULL) {
					std::cerr << "Renderer can not be created !" << std::endl;
					success = false;
				}
			}
		}
	}
	return success;
}

bool loadMedia()
{
	bool success = true;

	if(!gFooTexture.loadFromFile("foo.png"))
	{
		std::cerr << "first picture can not be loaded! "<< std::endl;
		success = false;
	}
	if(!gBackgroundTexture.loadFromFile("background.png"))
	{
		std::cerr << "The background can not be loaded !" << endl;
		success = false;
	}
	return success;
}
void close()
{
	gFooTexture.free();
	gBackgroundTexture.free();

	SDL_DestroyRenderer(gRenderer.gRenderer);
	gRenderer.gRenderer = NULL;

	SDL_DestroyWindow(gWindow);
	gWindow = NULL;

	IMG_Quit();
	SDL_Quit();
}

int main( int argc, char* args[] ) {



	if(!init()){
		std::cerr << "The project can not be initialized !" << endl;
	}else
	{
		if(!loadMedia())
		{
			std::cerr << "The media can not be loaded !" << endl;
		}else
		{
			bool quit = false;

			SDL_Event e;

			while(!quit)
			{
				while(SDL_PollEvent(&e) !=0)
				{
					if(e.type == SDL_QUIT)
					{
						quit = true;
					}
				}

				SDL_SetRenderDrawColor(gRenderer.gRenderer,0xFF,0xFF,0xFF,0xFF);
				SDL_RenderClear(gRenderer.gRenderer);


				gBackgroundTexture.render(0,0);

				gFooTexture.render(240,190);

				SDL_RenderPresent(gRenderer.gRenderer);
			}


		}
	}





	return 0;
}
