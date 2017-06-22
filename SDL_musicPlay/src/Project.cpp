/*
 * Project.cpp
 *
 *  Created on: 21.06.2017
 *      Author: Danny
 */

#include "Project.h"


Project::Project() :
		m_PlayButtonTexture(NULL), m_StopButtonTexture(NULL), m_PreviousButtonTexture(
				NULL), m_NextButtonTexture(NULL), m_background(NULL), m_StopSecondButtonTextures(
				NULL), m_PlaySecondButtonTexture(NULL) {
	// TODO Auto-generated constructor stub

}

Project::~Project() {
	// TODO Auto-generated destructor stub
}

SDL_Texture*& Project::getPlayButtonTexture() {
	return m_PlayButtonTexture;
}

bool Project::init() {
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0) {
		std::cerr << "Video or audio can not be initialized !" << std::endl;
		success = false;
	} else {
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
			std::cerr << "Linear texture filtering not enabled !" << std::endl;
		}
		myWindow = SDL_CreateWindow("Music Window", SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);
		if (myWindow == NULL) {
			std::cerr << "Window can not be created !" << std::endl;
			success = false;
		} else {
			myRenderer = SDL_CreateRenderer(myWindow, -1,
					SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
			if (myRenderer == NULL) {
				std::cerr << "Renderer can not be created !" << std::endl;
				success = false;
			} else {

				SDL_SetRenderDrawColor(myRenderer, 0x00, 0x00, 0x00, 0x00);

				if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
					std::cerr << "The audio can not be initialized !"
							<< std::endl;
					success = false;
				} else {
					if (TTF_Init() == -1) {
						std::cerr << "Song name can not be initialized!"
								<< std::endl;
					}
				}
			}
		}

	}
	return success;
}

bool Project::loadMedia() {
	bool success = true;

	m_background = loadTexture("kapak_118.png");
	if (m_background == NULL) {
		std::cerr << "Background image can not be loaded !" << std::endl;
	}
	m_PlaySecondButtonTexture = loadTexture("secondPlayButton.png");
	if (m_PlaySecondButtonTexture == NULL) {
		std::cerr << "Second play button can not be loaded !" << std::endl;
	}
	m_StopSecondButtonTextures = loadTexture("secondStopButton.png");
	if (m_StopSecondButtonTextures == NULL) {
		std::cerr << "Second play button can not be loaded !" << std::endl;
	}

	m_PlayButtonTexture = loadTexture("playButton.png");
	if (m_PlayButtonTexture == NULL) {
		std::cerr << "Play button texture can not loading an image !"
				<< std::endl;
		success = false;

	}
	m_StopButtonTexture = loadTexture("stopButton.png");
	if (m_StopButtonTexture == NULL) {
		std::cerr << "Stop button texture can not loading an image !"
				<< std::endl;
		success = false;
	}
	m_PreviousButtonTexture = loadTexture("previousButton.png");
	if (m_PreviousButtonTexture == NULL) {
		std::cerr << "Previous button can not be initialized !" << std::endl;
		success = false;
	}
	m_NextButtonTexture = loadTexture("nextButton.png");
	if (m_NextButtonTexture == NULL) {
		std::cerr << "Button Next can not be loaded !" << std::endl;
		success = false;
	}
	songName = TTF_OpenFont("lazy.ttf", 80);
	if (songName == NULL) {
		std::cerr << "Font can not be load !" << std::endl;
	}


//	mySong = Mix_LoadMUS(musicPlaylist[i].c_str());
//	if(mySong == NULL)
//	{
//		std::cerr << "The song can not be loaded !" << std::endl;
//	}
	return success;
}

void Project::close() {
//	TTF_CloseFont(songName);
//	songName = NULL;
	SDL_DestroyTexture(m_background);
	SDL_DestroyTexture(m_PlayButtonTexture);
	SDL_DestroyTexture(m_StopButtonTexture);
	SDL_DestroyTexture(m_PlaySecondButtonTexture);
	SDL_DestroyTexture(m_StopSecondButtonTextures);
	SDL_DestroyTexture(m_PreviousButtonTexture);
	SDL_DestroyTexture(m_NextButtonTexture);
	m_PlayButtonTexture = NULL;
	m_StopButtonTexture = NULL;
	m_background = NULL;
	m_PlaySecondButtonTexture = NULL;
	m_StopSecondButtonTextures = NULL;
	m_PreviousButtonTexture = NULL;
	m_NextButtonTexture = NULL;

	Mix_FreeMusic(mySong);
	mySong = NULL;

	SDL_DestroyRenderer(myRenderer);
	myRenderer = NULL;
	SDL_DestroyWindow(myWindow);
	myWindow = NULL;

	TTF_Quit();
	Mix_Quit();
	IMG_Quit();
	SDL_Quit();
}

void Project::buttonRender(int x, int y, SDL_Texture* texture) {
	SDL_Rect buttonRect = { x, y, button_width, button_height };
	SDL_RenderCopy(myRenderer, texture, NULL, &buttonRect);
//	SDL_RenderPresent(myRenderer);

}

bool Project::isClicked(int x, int y) {
	int mx, my;
	SDL_GetMouseState(&mx, &my);
	if (mx >= x && mx <= button_width + x && my >= y
			&& my <= y + button_height) {
		return true;
	}
	return false;
}

SDL_Texture* Project::loadTexture(std::string picPath) {

	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = IMG_Load(picPath.c_str());
	if (loadedSurface == NULL) {
		std::cerr << "Surface can not load image !" << std::endl;
	} else {
		SDL_SetColorKey(loadedSurface, SDL_TRUE,
				SDL_MapRGB(loadedSurface->format, 255, 255, 255));
		newTexture = SDL_CreateTextureFromSurface(myRenderer, loadedSurface);
		if (newTexture == NULL) {
			std::cerr << "The texture can not be created !" << std::endl;
		}
		SDL_FreeSurface(loadedSurface);
	}

	return newTexture;

}

SDL_Texture*& Project::getStopButtonTexture() {
	return m_StopButtonTexture;
}

SDL_Texture*& Project::getPlaySecondButtonTexture() {
	return m_PlaySecondButtonTexture;
}

SDL_Texture*& Project::getStopSecondButtonTextures() {
	return m_StopSecondButtonTextures;
}

void Project::backgroundRender(SDL_Texture* texture) {
	SDL_Rect rect = { 0, 0, screen_width, screen_height };
	SDL_RenderCopy(myRenderer, texture, NULL, &rect);
	SDL_RenderPresent(myRenderer);

}

SDL_Texture*& Project::getNextButtonTexture() {
	return m_NextButtonTexture;
}

void Project::textRender(int x, int y, SDL_Texture* textureText) {
	SDL_Rect buttonRect = { x, y, text_width, text_height };
	SDL_RenderCopy(myRenderer, textureText, NULL, &buttonRect);
}

SDL_Texture*& Project::getTextTexture() {
	return m_TextTexture;
}

SDL_Texture*& Project::getPreviousButtonTexture() {
	return m_PreviousButtonTexture;
}

//void Project::playNextSong() {
//	free();
//
//	mySong = Mix_LoadMUS(Playlist[i].c_str());
//
//}

SDL_Texture*& Project::getBackground() {
	return m_background;
}

void Project::free() {
	Mix_FreeMusic(mySong);
	mySong = NULL;

}

void Project::freeTexture(SDL_Texture* textureToDestroy) {
	SDL_DestroyTexture(textureToDestroy);
	textureToDestroy == NULL;
}
void Project::LoadFromRenderedText(std::string textureText,
		SDL_Color textColor) {

	SDL_Surface* textSurface = TTF_RenderText_Solid(songName,
			textureText.c_str(), textColor);
	if (textSurface == NULL) {
		std::cerr << "Problem with create text surface !" << std::endl;
	} else {
		m_TextTexture = SDL_CreateTextureFromSurface(myRenderer, textSurface);
		if (m_TextTexture == NULL) {
			std::cerr << "Problem with creating text texture !" << std::endl;
		}
		SDL_FreeSurface(textSurface);
	}

}

void Project::freeTextTexture() {
	TTF_CloseFont(songName);
	songName = NULL;
	SDL_DestroyTexture(m_TextTexture);
	m_TextTexture = NULL;

}
