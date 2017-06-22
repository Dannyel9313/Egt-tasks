/*
 * Address.cpp
 *
 *  Created on: 20.04.2017
 *      Author: Danny
 */

#include "Address.h"
#include <iostream>
using namespace std;

Address::Address(int id, string street, int number) {
	setId(id);
	setStreet(street);
	setNumber(number);
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}

int Address::getId() const {
	return id;
}

void Address::setId(int id) {
	this->id = id;
}

int Address::getNumber() const {
	return number;
}

void Address::setNumber(int number) {
	this->number = number;
}

const string& Address::getStreet() const {
	return street;
}

void Address::setStreet(const string& street) {
	this->street = street;
}

void Address::print() {
	cout << "ID is :" << getId() << endl;
	cout << "Street : "<< getStreet() << endl;
	cout << "Street number : " << getNumber() << endl;
}
