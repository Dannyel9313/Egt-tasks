/*
 * Director.cpp
 *
 *  Created on: 10.05.2017
 *      Author: Danny
 */

#include "Director.h"
#include <iostream>
using namespace std;
Director::Director() {

	setName("N/A");
	setFamily("N/A");
	setPopularity("N/A");
	// TODO Auto-generated constructor stub

}

Director::~Director() {
	// TODO Auto-generated destructor stub
}

const string& Director::getFamily() const {
	return family;
}

void Director::setFamily(const string& family) {
	this->family = family;
}

const string& Director::getName() const {
	return name;
}

void Director::setName(const string& name) {
	this->name = name;
}

const string& Director::getPopularity() const {
	return popularity;
}

Director::Director(string name, string family, string popularity) {

	setName(name);
	setFamily(family);
	setPopularity(popularity);

}

void Director::setPopularity(const string& popularity) {
	this->popularity = popularity;
}

void Director::printDirectorInfo() {

	cout << "Director name is : " << getName() << endl;
	cout << "Director family is : " << getFamily() << endl;
	cout << "He is : " << getPopularity() << " popular !" << endl;
}
