/*
 * VideoLibrary.cpp
 *
 *  Created on: 10.05.2017
 *      Author: Danny
 */

#include "VideoLibrary.h"
#include <iostream>
using namespace std;

VideoLibrary::VideoLibrary() {

	// TODO Auto-generated constructor stub

}

VideoLibrary::~VideoLibrary() {
	// TODO Auto-generated destructor stub
}

const vector<Movie>& VideoLibrary::getMovie() const {
	return movie;
}

void VideoLibrary::setMovie(const vector<Movie>& movie) {
	this->movie = movie;
}

void VideoLibrary::addMovie(Movie& film) {


for(unsigned int i = 0; i < movie.size();i++){
	if(film.getId() == movie[i].getId()){
		return;
}

}
movie.push_back(film);
}

void VideoLibrary::searchByName(string name) {
	for(unsigned int i = 0; i < movie.size();i++){
		if(name == movie[i].getName()){
			 movie[i].printMovieInfo();
		}
	}


}

void VideoLibrary::numberFilmsByGenre() {
	int counterAction = 0;
	int counterCommedy = 0;
	int counterThriller = 0;
	int counterDrama = 0;
	int counterDocumentary = 0;


	for(unsigned int i = 0; i < movie.size();i++){
		if(movie[i].getGenre() == "Action"){
			counterAction++;
		}
		if(movie[i].getGenre() == "Commedy"){
			counterCommedy++;
		}
		if(movie[i].getGenre() == "Thriller"){
			counterThriller++;
		}
		if(movie[i].getGenre() == "Drama"){
			counterDrama++;
		}
		if(movie[i].getGenre() == "Documentary"){
			counterDocumentary++;
		}

	}
	cout <<"Movies : " << endl;
			cout << "Action -" << counterAction << " numbers" << endl;
			cout << "Commeedy - " << counterCommedy << " numbers" << endl;
			cout << "Thriller - " << counterThriller << " numbers" << endl;
			cout << "Drama - " << counterDrama << " numbers" << endl;
			cout << "Documentary - " << counterDocumentary << " numbers" << endl;


}

void VideoLibrary::printInfo() {
for (unsigned int i = 0; i < movie.size(); i++){
	movie[i].printMovieInfo();
}
}
