/*
 * LTexture.cpp
 *
 *  Created on: 11.06.2017
 *      Author: Danny
 */

#include "LTexture.h"
#include <iostream>


LTexture::LTexture() {

	m_texture = NULL;
	m_Height = 0;
	m_Wigth = 0;
	// TODO Auto-generated constructor stub

}

LTexture::~LTexture() {

	free();
	// TODO Auto-generated destructor stub
}

int LTexture::getHeight() const {
	return m_Height;
}

int LTexture::getWigth() const {
	return m_Wigth;
}

bool LTexture::loadFromFile(std::string picPath) {

	free();

	SDL_Texture *newTexture;

	SDL_Surface* loadedSurface = IMG_Load(picPath.c_str());
	if (loadedSurface == NULL) {
		std::cerr << "Problem with load image !" << std::endl;
	}else
	{
		SDL_SetColorKey(loadedSurface,SDL_TRUE,SDL_MapRGB(loadedSurface->format,0,0xFF,0xFF));

		newTexture = SDL_CreateTextureFromSurface(gRenderer,loadedSurface);
		if(newTexture == NULL)
		{
		std::cerr << "Texture can not be created !" << std::endl;
		}else
		{
			m_Wigth = loadedSurface->w;
			m_Height = loadedSurface->h;
		}
	}
return newTexture;
}

void LTexture::free() {
	if (m_texture != NULL) {
		SDL_DestroyTexture(m_texture);
		m_texture = NULL;
		m_Wigth = 0;
		m_Height = 0;
	}
}

void LTexture::render(int x, int y) {

	SDL_Rect renderQuad = { x, y, m_Wigth, m_Height };
	SDL_RenderCopy(gRenderer, m_texture, NULL, &renderQuad);
}
