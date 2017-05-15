/*
 * VideoLibrary.h
 *
 *  Created on: 10.05.2017
 *      Author: Danny
 */

#ifndef VIDEOLIBRARY_H_
#define VIDEOLIBRARY_H_
#include "Movie.h"
#include <vector>
using namespace std;

class VideoLibrary {
public:
	VideoLibrary();
	virtual ~VideoLibrary();
	const vector<Movie>& getMovie() const;
	void setMovie(const vector<Movie>& movie);


	void addMovie(Movie& film);
	void searchByName(string name);
	void numberFilmsByGenre();
void printInfo();

private:
	vector<Movie> movie;

};

#endif /* VIDEOLIBRARY_H_ */
