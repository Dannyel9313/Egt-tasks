//============================================================================
// Name        : SDL-geometricRender.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

const int width = 640;
const int height = 480;

bool init();

bool loadMedia();

void close();

SDL_Texture* loadTexture(string picPath);

SDL_Window* myWindow = NULL;

SDL_Renderer* myRenderer = NULL;

bool init() {
	bool success = true;

	if (!SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "The media can not be initialized ! " << endl;
		success = true;

	} else {
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
			cout << "linear textured is not enabled !" << endl;
		} else {
			myWindow = SDL_CreateWindow("Geometric renderer",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height,
					SDL_WINDOW_SHOWN);
			if (myWindow == NULL) {
				cout << "The window can not be created !" << endl;
				success = false;

			} else {
				myRenderer = SDL_CreateRenderer(myWindow, -1,
						SDL_RENDERER_ACCELERATED);
				if (myRenderer == NULL) {
					cout << "The render can not be created!" << endl;
					success = false;

				} else {
					SDL_SetRenderDrawColor(myRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

					int imgFlags = IMG_INIT_PNG;

					if (!(IMG_Init(imgFlags) & imgFlags)) {
						cout << "SDL_image could not be init" << endl;
						success = false;
					}
				}
			}
		}

	}
	return success;
}

bool loadMedia() {
	bool success = true;
	return success;
}

void close() {
	SDL_DestroyRenderer(myRenderer);
	myRenderer == NULL;

	SDL_DestroyWindow(myWindow);
	myWindow == NULL;

	IMG_Quit();
	SDL_Quit();
}

SDL_Texture* loadTexture(string picPath) {

	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = IMG_Load(picPath.c_str());

	if (loadedSurface == NULL) {
		cout << "The surface can not load an image!" << endl;

	} else {
		newTexture = SDL_CreateTextureFromSurface(myRenderer, loadedSurface);

		if (newTexture == NULL) {
			cout << "texture can not be created !" << endl;
		} else {
			SDL_FreeSurface(loadedSurface);
		}
	}
	return newTexture;
}
int main(int argc, char* args[]) {

	if (!init()) {
		cout << "the project can not be initialized !" << endl;
	} else {
		if (!loadMedia()) {
			cout << "The media can not be loaded !" << endl;
		} else {

			bool quit = false;
			SDL_Event e;

			while (!quit) {
				while (SDL_PollEvent(&e) != 0) {
					if (e.type == SDL_QUIT) {
						quit = true;
					}
				}
				SDL_SetRenderDrawColor(myRenderer, 0x09, 0xd1, 0xf9, 0xFF);
				SDL_RenderPresent(myRenderer);

				SDL_Rect fillRect = { width /2 , height/2 , width/6, height/6};
				SDL_SetRenderDrawColor(myRenderer, 0x10, 0xff, 0x0c, 0xFF);
				SDL_RenderFillRect(myRenderer, &fillRect);

				SDL_Rect outlineRect = { width / 6, height / 6, width * 2 / 3,
						height * 2 / 3 };
				SDL_SetRenderDrawColor(myRenderer, 0xf7, 0x09, 0xf3, 0xFF);
				SDL_RenderDrawRect(myRenderer, &outlineRect);

				SDL_SetRenderDrawColor(myRenderer, 0x00, 0x00, 0xFF, 0xFF);
				SDL_RenderDrawLine(myRenderer, 0, height / 2, width,
						height / 2);

				SDL_SetRenderDrawColor(myRenderer, 0xFF, 0xFF, 0x00, 0xFF);

				SDL_RenderDrawLine(myRenderer,height / 2,0,height / 3,width);

				SDL_RenderPresent(myRenderer);

			}

		}
	}
	close();
	return 0;
}
