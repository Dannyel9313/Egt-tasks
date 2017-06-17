/*
 * Game.cpp
 *
 *  Created on: 14.06.2017
 *      Author: Danny
 */
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include "Game.h"

Game::Game() :
		m_BackGroundTexture(NULL), m_TextureX(NULL), m_TextureY(NULL) {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::init() {

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cerr << "Problem with initializing" << std::endl;
	}
	if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
		std::cerr << "Linear structure is not enable !" << std::endl;
	}
	ticTacWIndow = SDL_CreateWindow("Tic Tac Toe", SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height,
			SDL_WINDOW_SHOWN);
	if (ticTacWIndow == NULL) {
		std::cerr << "Problem with creating a window !" << std::endl;
	}
	ticTacRenderer = SDL_CreateRenderer(ticTacWIndow, -1,
			SDL_RENDERER_ACCELERATED);
	if (ticTacRenderer == NULL) {
		std::cerr << "Problem with creating a render" << std::endl;
	}
	SDL_SetRenderDrawColor(ticTacRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
	int imgFlags = IMG_INIT_PNG;
					if (!(IMG_Init(imgFlags) & imgFlags)) {
						std::cerr << "problem with initializing pic !" << std::endl;
					}
}

void Game::loadMedia() {

	Game::m_BackGroundTexture = loadTexture("ticTacToe.png");
	if(m_BackGroundTexture == NULL)
	{
		std::cerr << "Problem with loading background !" << std::endl;
	}
	Game::m_TextureX = loadTexture("images.png");
	if(m_TextureX == NULL)
	{
		std::cerr << "Problem with loading heart !" << std::endl;
	}
	Game::m_TextureY = loadTexture("brokenHeart.png");
	if(m_TextureY == NULL)
	{
	std::cerr << "Problem with loading broken Heart !" << std::endl;
	}




}

SDL_Texture* Game::loadTexture(std::string picPath) {
	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = IMG_Load(picPath.c_str());
	if(loadedSurface == NULL)
	{
		std::cerr << "Problem with surface for texture !" << std::endl;
	}
	SDL_SetColorKey(loadedSurface,SDL_TRUE,SDL_MapRGB(loadedSurface->format,255,255,255));
//	SDL_SetColorKey(loadedSurface,SDL_TRUE,SDL_MapRGB(loadedSurface->format,103,103,103));
	newTexture = SDL_CreateTextureFromSurface(ticTacRenderer,loadedSurface);
	if(newTexture == NULL)
	{
		std::cerr << "Problem with creating texture !" << std::endl;
	}
	SDL_FreeSurface(loadedSurface);
	return newTexture;
}

void Game::free() {
	SDL_DestroyTexture(m_BackGroundTexture);
	SDL_DestroyTexture(m_TextureX);
	SDL_DestroyTexture(m_TextureY);
	m_BackGroundTexture = NULL;
	m_TextureX = NULL;
	m_TextureY = NULL;

	SDL_DestroyRenderer(ticTacRenderer);
	ticTacRenderer = NULL;

	SDL_DestroyWindow(ticTacWIndow);
	ticTacWIndow = NULL;

	IMG_Quit();
	SDL_Quit();




}

 SDL_Texture*& Game::getBackGroundTexture() {
	return m_BackGroundTexture;
}
 SDL_Texture*& Game::getTextureX()  {
	return m_TextureX;
}
 SDL_Texture*& Game::getTextureY()  {
	return m_TextureY;
}

void Game::render(SDL_Rect &rectButton,SDL_Texture* newTexture) {


	SDL_RenderCopy(ticTacRenderer,newTexture,NULL,&rectButton);



}

void Game::render(SDL_Rect& from, SDL_Rect& to,SDL_Texture* whatTexture) {

	for(int i = from.x; i < to.x; i++){
		for(int j = from.y; j < to.y; j++){
SDL_RenderCopy(ticTacRenderer,whatTexture,NULL,&to);
		}
	}



}

//bool Game::verify(SDL_Rect &verifyRect) {
//
//}
