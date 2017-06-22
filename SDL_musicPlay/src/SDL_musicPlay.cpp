//============================================================================
// Name        : SDL_musicPlay.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "Project.h"
#include <iostream>
using namespace std;

std::string Playlist[] =
		{ "Anymood Live  Terasz 2013.09.16.mp3",
				"Axel Thesleff - Bad Karma (Mp3FB.com).mp3",
				"Bumer 2 - Svoboda(HQ).mp3",
				"C Block   So Strung Out  Ibiza Deep Summer Remix 2015.mp3",
				"Cristoph - Slowly Burning (ft. Jem Cooke).mp3",
				"Crystallize - Lindsey Stirling (Dubstep Violin Original Song).mp3",
				"Damian Lazarus  The Ancient Moons - Sacred Dance of The Demon (Gorgon City Remix).mp3",
				"Daniel Fernandes - After All (Original Mix).mp3",
				"Dennis Ferrer - Mind Ur Step (Ft. Janelle Kroll).mp3",
				"Deya Dova - Footsteps In The Stars Temple Step Project  DJ Dakini Remix.mp3",
				"Disciples - They Dont Know.mp3",
				"Dr.Alban - Enemies (Dj Kapral Remix 2016).mp3",
				"Eurythmics - Sweet Dreams (Ibiza Deep Summer Remix 2015) HD.mp3",
				"Gregory Porter - Liquid Spirit (Claptone Remix).mp3",
				"Groove Armada - Superstylin.mp3",
				"Hippie Sabotage - High Enough (Halsey Flip).mp3",
				"Infinity Ink - Infinity (Original Mix).mp3",
				"Joey Beltram - Energy Flash  -  RS Records Classics.mp3" };

int main(int argc, char* args[]) {

//	bool nameNext = false;
	bool namePrevious = false;
	Project object;
	int i = 0;

	if (!object.init()) {
		std::cerr << "Can not be initialized !" << std::endl;

	} else {
		if (!object.loadMedia()) {
			std::cerr << "The media can not be loaded !" << std::endl;
		} else {
			bool quit = false;
			SDL_Event e;

			SDL_SetRenderDrawColor(object.myRenderer, 0x00, 0x00, 0x00, 0x00);
			SDL_RenderClear(object.myRenderer);
			object.backgroundRender(object.getBackground());
			SDL_Color textColor = { 32, 255, 49 };

			object.buttonRender(250, 420, object.getPreviousButtonTexture());
			object.buttonRender(550, 420, object.getNextButtonTexture());
			while (!quit) {
				while (SDL_PollEvent(&e) != 0) {
					if (e.type == SDL_QUIT) {
						quit = true;
					}
//					} else if (e.type == SDL_KEYDOWN) {
//						switch (e.key.keysym.sym) {
//						case SDLK_p:
//							Mix_PlayMusic(object.mySong, -1);
//
//							break;
//						case SDLK_s:
//							Mix_PauseMusic();
//							break;

					object.buttonRender(350, 420,
							object.getPlayButtonTexture());
					object.buttonRender(450, 420,
							object.getStopButtonTexture());

					if (e.type == SDL_MOUSEBUTTONDOWN) {
						//cout << Playlist[i] << "??????/" << endl;
						if (object.isClicked(350, 420)) {
							object.buttonRender(350, 420,
									object.getPlaySecondButtonTexture());
							object.LoadFromRenderedText(Playlist[i], textColor);
							object.textRender(20, 50, object.getTextTexture());
							//						object.free();
							object.mySong = Mix_LoadMUS(Playlist[0].c_str());

							Mix_PlayMusic(object.mySong, -1);
						}
						if (object.isClicked(450, 420)) {

							object.buttonRender(450, 420,
									object.getStopSecondButtonTextures());
							Mix_PauseMusic();
						}
						if (object.isClicked(550, 420)) {
							i += 1;

							//nameNext = true;
							if (i == 18) {
								i = 0;
							}
							object.freeTextTexture();
							object.songName = TTF_OpenFont("lazy.ttf", 80);
//															SDL_RenderPresent(object.myRenderer);
							object.LoadFromRenderedText(Playlist[i], textColor);
							object.textRender(20, 50, object.getTextTexture());
							cout << i << "?????" << endl;
							object.free();
							object.mySong = Mix_LoadMUS(Playlist[i].c_str());
							Mix_PlayMusic(object.mySong, -1);
						}
						if (object.isClicked(250, 420)) {
							i--;
							//namePrevious = true;
							if (i == -1) {
								i = 17;
							}
							cout << i << "////" << endl;
							object.free();
							object.mySong = Mix_LoadMUS(Playlist[i].c_str());
							Mix_PlayMusic(object.mySong, -1);
						}
						//					if (nameNext == true) {
						//
						//					}
						if (namePrevious == true) {
							object.freeTextTexture();
							object.LoadFromRenderedText(Playlist[i].c_str(),
									textColor);
						}

					}

					//				nameNext = false;
					//				namePrevious = false;
				}
				SDL_RenderPresent(object.myRenderer);
			}

		}
	}

	object.close();
	return 0;
}
