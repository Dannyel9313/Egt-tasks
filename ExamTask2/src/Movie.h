/*
 * Movie.h
 *
 *  Created on: 10.05.2017
 *      Author: Danny
 */
#include "Director.h"
#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;

class Movie {
public:
	Movie();
	Movie(string name, string genre, Director& director,string info, int id);
	virtual ~Movie();
	const Director& getDirector() const;
	void setDirector(const Director& director);
	const string& getGenre() const;
	void setGenre(const string& genre);
	int getId() const;
	void setId(int id);
	const string& getInfo() const;
	void setInfo(const string& info);
	const string& getName() const;
	void setName(const string& name);

	void printMovieInfo();

private:
string name;
string genre;
Director director;
string info;
int id;


};

#endif /* MOVIE_H_ */
