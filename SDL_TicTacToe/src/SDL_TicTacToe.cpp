//============================================================================
// Name        : SDL_TicTacToe.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <iostream>
#include "Game.h"

using namespace std;

int main(int argc, char* args[]) {

	Game game;
//	Button firstPlayerButton(1,270);
//	Button secondPlayerButton(564,249);



	int counter = 0;
bool hasToCalculate = false;

	bool verifyRect1 = false;
	bool verifyRect2 = false;
	bool verifyRect3 = false;
	bool verifyRect4 = false;
	bool verifyRect5 = false;
	bool verifyRect6 = false;
	bool verifyRect7 = false;
	bool verifyRect8 = false;
	bool verifyRect9 = false;


	SDL_Rect rect1;
	rect1.x = 138;
	rect1.y = 103;
	rect1.w = button_width;
	rect1.h = button_height;

	SDL_Rect rect2;
	rect2.x = 278;
	rect2.y = 105;
	rect2.w = button_width;
	rect2.h = button_height;

	SDL_Rect rect3;
	rect3.x = 416;
	rect3.y = 107;
	rect3.w = button_width;
	rect3.h = button_height;

	SDL_Rect rect4;
	rect4.x = 140;
	rect4.y = 190;
	rect4.w = button_width;
	rect4.h = button_height;

	SDL_Rect rect5;
	rect5.x = 268;
	rect5.y = 190;
	rect5.w = button_width;
	rect5.h = button_height;

	SDL_Rect rect6;
	rect6.x = 407;
	rect6.y = 200;
	rect6.w = button_width;
	rect6.h = button_height;

	SDL_Rect rect7;
	rect7.x = 135;
	rect7.y = 289;
	rect7.w = button_width;
	rect7.h = button_height;

	SDL_Rect rect8;
	rect8.x = 269;
	rect8.y = 293;
	rect8.w = button_width;
	rect8.h = button_height;

	SDL_Rect rect9;
	rect9.x = 404;
	rect9.y = 296;
	rect9.w = button_width;
	rect9.h = button_height;

	game.init();
	game.loadMedia();

	bool quit = false;

	SDL_Event e;

	SDL_SetRenderDrawColor(game.ticTacRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
			SDL_RenderClear(game.ticTacRenderer);
	SDL_Rect backgroundRect;
		backgroundRect.x = 0;
		backgroundRect.y = 0;
		backgroundRect.w = screen_width;
		backgroundRect.h = screen_height;

		game.render(backgroundRect, game.getBackGroundTexture());

//		std::cout << "x->" << X << " " << "Y->" << Y << std::endl;

		SDL_Rect firstPlayerRect;
		firstPlayerRect.x = 1;
		firstPlayerRect.y = 270;
		firstPlayerRect.w = button_width;
		firstPlayerRect.h = button_height;

		game.render(firstPlayerRect, game.getTextureX());

		SDL_Rect secondPlayerRect;

		secondPlayerRect.x = 564;
		secondPlayerRect.y = 249;
		secondPlayerRect.w = button_width;
		secondPlayerRect.h = button_height;

		game.render(secondPlayerRect, game.getTextureY());
		SDL_RenderPresent(game.ticTacRenderer);
	while (!quit) {

		while (SDL_PollEvent(&e) != 0) {
			if (e.type == SDL_QUIT) {
				quit = true;
			}
			int mx, my;

					if (e.type == SDL_MOUSEBUTTONDOWN) {
						hasToCalculate = true;
						cout << "btn up";

						SDL_GetMouseState(&mx, &my);
						int x = mx;
						int y = my;
						if (x >= 138 && x <= 218 && y >= 103 && y <= 183) {
							verifyRect1 = true;
							counter++;

						}
						if (x >= 278 && x <= 358 && y >= 105 && y <= 185) {
							verifyRect2 = true;
							counter++;

						}
						if (x >= 416 && x <= 476 && y >= 107 && y <= 187) {
							verifyRect3 = true;
							counter++;

						}
						if (x >= 140 && x <= 220 && y >= 190 && y <= 280) {
							verifyRect4 = true;
							counter++;

						}
						if (x >= 268 && x <= 348 && y >= 190 && y <= 280) {
							verifyRect5 = true;
							counter++;

						}
						if (x >= 407 && x <= 487 && y >= 200 && y <= 280) {
							verifyRect6 = true;
							counter++;

						}
						if (x >= 135 && x <= 215 && y >= 289 && y <= 369) {
							verifyRect7 = true;
							counter++;

						}
						if (x >= 269 && x <= 349 && y >= 293 && y <= 373) {
							verifyRect8 = true;
							counter++;

						}
						if (x >= 404 && x <= 484 && y >= 296 && y <= y + 376) {
							verifyRect9 = true;
							counter++;

						}
					}

				if(hasToCalculate == true){
					cout << "counter =" << counter << endl
								<<verifyRect1 << endl
								<<verifyRect2 << endl
								<< verifyRect3 << endl
								<< verifyRect4 << endl;

						if (verifyRect1 == true ) {
							if((counter % 2) == 0){
								game.render(rect1,game.getTextureY());
								SDL_RenderPresent(game.ticTacRenderer);
							}else{
//game.render(firstPlayerRect,rect1,game.getTextureX());
							game.render(rect1, game.getTextureX());
					SDL_RenderPresent(game.ticTacRenderer);

							}
							verifyRect1 = false;
						}
						if (verifyRect2 == true) {
							if((counter % 2) == 0){
										game.render(rect2,game.getTextureY());
										SDL_RenderPresent(game.ticTacRenderer);
									}else{

									game.render(rect2, game.getTextureX());
							SDL_RenderPresent(game.ticTacRenderer);
									}
							verifyRect2 = false;
						}
						if (verifyRect3 == true) {
							if((counter % 2) == 0){
										game.render(rect3,game.getTextureY());
										SDL_RenderPresent(game.ticTacRenderer);
									}else{

									game.render(rect3, game.getTextureX());
							SDL_RenderPresent(game.ticTacRenderer);
									}
							verifyRect3 = false;
						}
						if (verifyRect4 == true) {
							if((counter % 2) == 0){
										game.render(rect4,game.getTextureY());
										SDL_RenderPresent(game.ticTacRenderer);
									}else{

									game.render(rect4, game.getTextureX());
							SDL_RenderPresent(game.ticTacRenderer);
									}
							verifyRect4 = false;
						}
						if (verifyRect5 == true) {
							if((counter % 2) == 0){
										game.render(rect5,game.getTextureY());
										SDL_RenderPresent(game.ticTacRenderer);
									}else{

									game.render(rect5, game.getTextureX());
							SDL_RenderPresent(game.ticTacRenderer);
									}
							verifyRect5 = false;
						}
						if (verifyRect6 == true) {
							if((counter % 2) == 0){
										game.render(rect6,game.getTextureY());
										SDL_RenderPresent(game.ticTacRenderer);
									}else{

									game.render(rect6, game.getTextureX());
							SDL_RenderPresent(game.ticTacRenderer);
									}
							verifyRect6 = false;
						}
						if (verifyRect7 == true) {
							if((counter % 2) == 0){
										game.render(rect7,game.getTextureY());
										SDL_RenderPresent(game.ticTacRenderer);
									}else{

									game.render(rect7, game.getTextureX());
							SDL_RenderPresent(game.ticTacRenderer);
									}
							verifyRect7 = false;
						}
						if (verifyRect8 == true) {
							if((counter % 2) == 0){
										game.render(rect8,game.getTextureY());
										SDL_RenderPresent(game.ticTacRenderer);
									}else{

									game.render(rect8, game.getTextureX());
							SDL_RenderPresent(game.ticTacRenderer);
									}
							verifyRect8 = false;
						}
						if (verifyRect9 == true) {
							if((counter % 2) == 0){
										game.render(rect9,game.getTextureY());
										SDL_RenderPresent(game.ticTacRenderer);
									}else{

									game.render(rect9, game.getTextureX());
							SDL_RenderPresent(game.ticTacRenderer);
									}
							verifyRect9 = false;
						}


						hasToCalculate = false;
				}



		}







	}
	game.free();

	return 0;
}
