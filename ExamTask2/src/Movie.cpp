/*
 * Movie.cpp
 *
 *  Created on: 10.05.2017
 *      Author: Danny
 */

#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie():director() {
	setName("N/A");
	setGenre("N/A");
	setInfo("N/A");
	setId(0);
	// TODO Auto-generated constructor stub

}

Movie::~Movie() {
	// TODO Auto-generated destructor stub
}

const Director& Movie::getDirector() const {
	return director;
}

void Movie::setDirector(const Director& director) {
	this->director = director;
}

const string& Movie::getGenre() const {
	return genre;
}

void Movie::setGenre(const string& genre) {
	this->genre = genre;
}

int Movie::getId() const {
	return id;
}

void Movie::setId(int id) {
	this->id = id;
}

const string& Movie::getInfo() const {
	return info;
}

void Movie::setInfo(const string& info) {
	this->info = info;
}

const string& Movie::getName() const {
	return name;
}

Movie::Movie(string name, string genre, Director& director, string info,
		int id):director(director) {
	setName(name);
	setGenre(genre);
	setInfo(info);
	setId(id);
}

void Movie::setName(const string& name) {
	this->name = name;
}

void Movie::printMovieInfo() {

	cout << "Name of movie : " << getName() << endl;
	cout << "Genre of movie : " << getGenre() << endl;
	cout << "Director is -" << endl;
	director.printDirectorInfo();
	cout << "The movie is " << getInfo() << endl;
	cout << "Movie id is : " << getId() << endl;



}
