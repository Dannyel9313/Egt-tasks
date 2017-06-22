/*
 * LTexture.h
 *
 *  Created on: 11.06.2017
 *      Author: Danny
 */

#ifndef LTEXTURE_H_
#define LTEXTURE_H_
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>

class LTexture {

public:
	LTexture();
	virtual ~LTexture();
	int getHeight() const;
	int getWigth() const;

	bool loadFromFile(std::string picPath);

	void free();

	void render(int x, int y);

	SDL_Renderer* gRenderer = NULL;

private:

	SDL_Texture* m_texture;

	int m_Height;
	int m_Wigth;



};

#endif /* LTEXTURE_H_ */
