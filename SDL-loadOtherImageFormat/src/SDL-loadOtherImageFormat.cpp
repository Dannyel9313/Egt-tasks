//============================================================================
// Name        : SDL-loadOtherImageFormat.cpp
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

const int screen_width = 640;
const int screen_height = 480;

bool init();

bool loadMedia();

void close();

SDL_Surface* loadSurface(string picPath);

SDL_Window* myWindow = NULL;

SDL_Surface* windowSurface = NULL;

SDL_Surface* picSurface = NULL;

bool init() {
	bool success = true;

	if (!SDL_Init(SDL_INIT_VIDEO) < 0) {

		cout << "Can not initialized !" << endl;
		success = false;

	} else {

		myWindow = SDL_CreateWindow("Picture of my mind",
				SDL_WINDOWPOS_CENTERED,
				SDL_WINDOWPOS_CENTERED, screen_width, screen_height,
				SDL_WINDOW_SHOWN);
		if (myWindow == NULL) {
			cout << "The window can not be created" << endl;
			success = false;
		} else {
			int imageFlag = IMG_INIT_PNG;
			if (!(IMG_Init(imageFlag) & imageFlag)) {
				cout << "img can not be initialized !" << endl;
				success = false;
			} else {
				windowSurface = SDL_GetWindowSurface(myWindow);

			}
		}

	}
	return success;
}

bool loadMedia() {
	bool success = true;

	picSurface = loadSurface("FreeStyle_Street_Basketball_Coverart.png");
	if (picSurface == NULL) {
		cout << "The picture can not be loaded ! " << endl;
		success = false;
	}
	return success;

}

void close() {
	SDL_FreeSurface(picSurface);

	SDL_DestroyWindow(myWindow);

	IMG_Quit();
	SDL_Quit();
}

SDL_Surface* loadSurface(string picPath) {

	SDL_Surface* optimizedSurface = NULL;

	SDL_Surface* loadedSurface = IMG_Load(picPath.c_str());
	if (loadedSurface == NULL) {
		cout << "The image can not be initialized !" << endl;
	} else {
		optimizedSurface = SDL_ConvertSurface(loadedSurface,
				windowSurface->format, NULL);
		if (optimizedSurface == NULL) {
			cout << "Unable to optimized a picture !" << endl;
		}
		SDL_FreeSurface(loadedSurface);
	}

	return optimizedSurface;
}

int main(int argc, char* args[]) {

	if (!init()) {
		cout << "The media can not be initialized !" << endl;

	} else {
		if (!loadMedia()) {
			cout << "The media can not be loaded !" << endl;
		}
	}

	bool quit = false;

	SDL_Event event;

	while(!quit){

		while(SDL_PollEvent(&event) != 0){

			if(event.type == SDL_QUIT)
			{
				quit = true;
			}

			SDL_BlitSurface(picSurface, NULL, windowSurface, NULL);

			SDL_UpdateWindowSurface(myWindow);
		}

	}

close();

	return 0;
}
