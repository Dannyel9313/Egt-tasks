/*
 * Game.cpp
 *
 *  Created on: 16.06.2017
 *      Author: Danny
 */

#include "Game.h"

Game::Game() :
		m_backgroundTxture(NULL), m_figuresTexture(NULL), m_buttonTexture(NULL) {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::close() {
	SDL_DestroyTexture(m_buttonTexture);
	SDL_DestroyTexture(m_figuresTexture);
	SDL_DestroyTexture(m_backgroundTxture);
	m_buttonTexture = NULL;
	m_figuresTexture = NULL;
	m_buttonTexture = NULL;

	SDL_DestroyRenderer(chesRenderer);
	chesRenderer = NULL;

	SDL_DestroyWindow(window);
	window = NULL;

	IMG_Quit();
	SDL_Quit();

}

void Game::init() {

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cerr << "can not init video" << std::endl;
	}
	if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
		std::cerr << "linear structure is not enable" << std::endl;
	}
	window = SDL_CreateWindow("Chess", SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);
	if (window == NULL) {
		std::cerr << "The window can not be created !" << std::endl;
	}
	chesRenderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (chesRenderer == NULL) {
		std::cerr << "Renderer can not be created !" << std::endl;
	}
	SDL_SetRenderDrawColor(chesRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

}

void Game::loadMedia() {

	m_backgroundTxture = loadTexture("chessTable.png");
	if (m_backgroundTxture == NULL) {
		std::cerr << "Problem with loading background !" << std::endl;
	}
	m_figuresTexture = loadTexture("chesFigures.png");
	if (m_figuresTexture == NULL) {
		std::cerr << "Problem with loading figures !" << std::endl;
	}
	m_buttonTexture = loadTexture("push-buttons.png");
	if (m_buttonTexture == NULL) {
		std::cerr << "Problem with loading buttons !" << std::endl;
	}

	arraySpriteWhite[0].x = 300;
	arraySpriteWhite[0].y = 70;
	arraySpriteWhite[0].w = 150;
	arraySpriteWhite[0].h = 70;

	arraySpriteWhite[1].x = 300;
	arraySpriteWhite[1].y = 70;
	arraySpriteWhite[1].w = 150;
	arraySpriteWhite[1].h = 70;

	arraySpriteWhite[2].x = 300;
	arraySpriteWhite[2].y = 70;
	arraySpriteWhite[2].w = 150;
	arraySpriteWhite[2].h = 70;

	arraySpriteWhite[3].x = 300;
	arraySpriteWhite[3].y = 70;
	arraySpriteWhite[3].w = 150;
	arraySpriteWhite[3].h = 70;

	arraySpriteWhite[4].x = 300;
	arraySpriteWhite[4].y = 70;
	arraySpriteWhite[4].w = 150;
	arraySpriteWhite[4].h = 70;

	arraySpriteWhite[5].x = 300;
	arraySpriteWhite[5].y = 70;
	arraySpriteWhite[5].w = 150;
	arraySpriteWhite[5].h = 70;

	arraySpriteWhite[6].x = 300;
	arraySpriteWhite[6].y = 70;
	arraySpriteWhite[6].w = 150;
	arraySpriteWhite[6].h = 70;

	arraySpriteWhite[7].x = 300;
	arraySpriteWhite[7].y = 70;
	arraySpriteWhite[7].w = 150;
	arraySpriteWhite[7].h = 70;

	arraySpriteWhite[8].x = 125;
	arraySpriteWhite[8].y = 70;
	arraySpriteWhite[8].w = 60;
	arraySpriteWhite[8].h = 70;

	arraySpriteWhite[9].x = 240;
	arraySpriteWhite[9].y = 70;
	arraySpriteWhite[9].w = 60;
	arraySpriteWhite[9].h = 70;

	arraySpriteWhite[10].x = 180;
	arraySpriteWhite[10].y = 70;
	arraySpriteWhite[10].w = 60;
	arraySpriteWhite[10].h = 70;

	arraySpriteWhite[11].x = 15;
	arraySpriteWhite[11].y = 70;
	arraySpriteWhite[11].w = 60;
	arraySpriteWhite[11].h = 70;

	arraySpriteWhite[12].x = 68;
	arraySpriteWhite[12].y = 70;
	arraySpriteWhite[12].w = 60;
	arraySpriteWhite[12].h = 70;

	arraySpriteWhite[13].x = 180;
	arraySpriteWhite[13].y = 70;
	arraySpriteWhite[13].w = 60;
	arraySpriteWhite[13].h = 70;

	arraySpriteWhite[14].x = 240;
	arraySpriteWhite[14].y = 70;
	arraySpriteWhite[14].w = 60;
	arraySpriteWhite[14].h = 70;

	arraySpriteWhite[15].x = 125;
	arraySpriteWhite[15].y = 70;
	arraySpriteWhite[15].w = 60;
	arraySpriteWhite[15].h = 70;


	arraySpriteBlack[0].x = 300;
	arraySpriteBlack[0].y = 3;
	arraySpriteBlack[0].w = 150;
	arraySpriteBlack[0].h = 70;

	arraySpriteBlack[1].x = 300;
	arraySpriteBlack[1].y = 3;
	arraySpriteBlack[1].w = 150;
	arraySpriteBlack[1].h = 70;

	arraySpriteBlack[2].x = 300;
	arraySpriteBlack[2].y = 3;
	arraySpriteBlack[2].w = 150;
	arraySpriteBlack[2].h = 70;

	arraySpriteBlack[3].x = 300;
	arraySpriteBlack[3].y = 3;
	arraySpriteBlack[3].w = 150;
	arraySpriteBlack[3].h = 70;

	arraySpriteBlack[4].x = 300;
	arraySpriteBlack[4].y = 3;
	arraySpriteBlack[4].w = 150;
	arraySpriteBlack[4].h = 70;

	arraySpriteBlack[5].x = 300;
	arraySpriteBlack[5].y = 3;
	arraySpriteBlack[5].w = 150;
	arraySpriteBlack[5].h = 70;

	arraySpriteBlack[6].x = 300;
	arraySpriteBlack[6].y = 3;
	arraySpriteBlack[6].w = 150;
	arraySpriteBlack[6].h = 70;

	arraySpriteBlack[7].x = 300;
	arraySpriteBlack[7].y = 3;
	arraySpriteBlack[7].w = 150;
	arraySpriteBlack[7].h = 70;

	arraySpriteBlack[8].x = 125;
	arraySpriteBlack[8].y = 3;
	arraySpriteBlack[8].w = 60;
	arraySpriteBlack[8].h = 68;

	arraySpriteBlack[9].x = 240;
	arraySpriteBlack[9].y = 3;
	arraySpriteBlack[9].w = 60;
	arraySpriteBlack[9].h = 68;

	arraySpriteBlack[10].x = 180;
	arraySpriteBlack[10].y = 3;
	arraySpriteBlack[10].w = 60;
	arraySpriteBlack[10].h = 68;

	arraySpriteBlack[11].x = 15;
	arraySpriteBlack[11].y = 3;
	arraySpriteBlack[11].w = 60;
	arraySpriteBlack[11].h = 68;

	arraySpriteBlack[12].x = 68;
	arraySpriteBlack[12].y = 3;
	arraySpriteBlack[12].w = 60;
	arraySpriteBlack[12].h = 68;

	arraySpriteBlack[13].x = 180;
	arraySpriteBlack[13].y = 3;
	arraySpriteBlack[13].w = 60;
	arraySpriteBlack[13].h = 68;

	arraySpriteBlack[14].x = 240;
	arraySpriteBlack[14].y = 3;
	arraySpriteBlack[14].w = 60;
	arraySpriteBlack[14].h = 68;

	arraySpriteBlack[15].x = 125;
	arraySpriteBlack[15].y = 3;
	arraySpriteBlack[15].w = 60;
	arraySpriteBlack[15].h = 68;
}
SDL_Texture* Game::loadTexture(std::string picPath) {

	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = IMG_Load(picPath.c_str());
	if (loadedSurface == NULL) {
		std::cerr << "The surface can not be created !" << std::endl;
	} else {
		SDL_SetColorKey(loadedSurface, SDL_TRUE,
				SDL_MapRGB(loadedSurface->format, 255, 255, 255));
		newTexture = SDL_CreateTextureFromSurface(chesRenderer, loadedSurface);
		if (newTexture == NULL) {
			std::cerr << "The texture can not be created !" << std::endl;
		} else {
			SDL_FreeSurface(loadedSurface);
		}

	}

	return newTexture;
}

SDL_Texture*& Game::getBackgroundTxture() {
	return m_backgroundTxture;
}

SDL_Texture*& Game::getButtonTexture() {
	return m_buttonTexture;
}

void Game::renderer(SDL_Rect& rect, SDL_Texture* lTexture) {

	SDL_RenderCopy(chesRenderer, lTexture, NULL, &rect);

}

SDL_Texture*& Game::getFiguresTexture() {
	return m_figuresTexture;
}

void Game::Render(int x, int y, SDL_Rect* clip) {

	SDL_Rect renderQuad { x, y, 80, 80 };

	//set clip rendering dimesion
	if (clip != NULL) {
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}

	SDL_RenderCopy(chesRenderer, getFiguresTexture(), clip, &renderQuad);
}
