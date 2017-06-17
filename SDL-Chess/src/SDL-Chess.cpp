//============================================================================
// Name        : SDL-Chess.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "Game.h"
using namespace std;

int main(int argc, char* args[]) {

	Game game;



	game.init();
	game.loadMedia();
	bool verifyButton = false;
	bool quit = false;

	SDL_Event e;

	while (!quit) {
		while (SDL_PollEvent(&e) != 0) {
			if (e.type == SDL_QUIT) {
				quit = true;

			}
			if (e.type == SDLK_SPACE)
									{
										verifyButton = true;
									}
							cout << verifyButton << ",,," << endl;
		}
		SDL_SetRenderDrawColor(game.chesRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
		SDL_RenderClear(game.chesRenderer);

		SDL_Rect backgroundRect;
		backgroundRect.x = 0;
		backgroundRect.y = 0;
		backgroundRect.w = screen_width;
		backgroundRect.h = screen_height;

		game.renderer(backgroundRect, game.getBackgroundTxture());

		SDL_Rect buttonRect;
		buttonRect.x = 753;
		buttonRect.y = 6;
		buttonRect.w = button_width;
		buttonRect.h = button_height;

		SDL_Rect butonCut;
		butonCut.x = 5;
		butonCut.y = 10;
		butonCut.w = 600;
		butonCut.h = 500;
		SDL_RenderCopy(game.chesRenderer, game.getButtonTexture(), &butonCut,
				&buttonRect);

		if (e.type == SDL_MOUSEBUTTONDOWN) {
			int mx, my;
			SDL_GetMouseState(&mx, &my);
			int x = mx;
			int y = my;
				cout << "X-> " << x << "  " << "Y->" << y << endl;
			if (x >= 753 && x <= 813 && y >= 6 && y <= 66) {
				verifyButton = true;

				SDL_Rect buttonRect;
				buttonRect.x = 753;
				buttonRect.y = 6;
				buttonRect.w = button_width;
				buttonRect.h = button_height;

				SDL_Rect butonCut;
				butonCut.x = 660;
				butonCut.y = 20;
				butonCut.w = 600;
				butonCut.h = 500;
				SDL_RenderCopy(game.chesRenderer, game.getButtonTexture(),
						&butonCut, &buttonRect);


			}



		}


		if(verifyButton == true)
		{
			int offset = 85;
			for(int i = 0; i < 8; i++){
				game.Render(75 + i * offset,470,&game.arraySpriteWhite[i]);
			}
			int move = 0;
			for(int i = 8; i < 16; i++){
				game.Render(81 + move * offset,530,&game.arraySpriteWhite[i]);
				move++;
			}
			//int offset = 85;
			for(int i = 0; i < 8; i++){
				game.Render(75 + i * offset,115,&game.arraySpriteBlack[i]);
			}
			 move = 0;
			for(int i = 8; i < 16; i++){
				game.Render(81 + move * offset,50,&game.arraySpriteBlack[i]);
				move++;
			}
		}

		SDL_RenderPresent(game.chesRenderer);
//		SDL_Delay(300);
	}

	return 0;
}
