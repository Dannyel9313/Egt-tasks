/*
 * Pizza.cpp
 *
 *  Created on: 20.04.2017
 *      Author: Danny
 */

#include "Pizza.h"



Pizza::Pizza(string name, double price) {
	setName(name);
	setPrice(price);
}

Pizza::~Pizza() {
	// TODO Auto-generated destructor stub
}

const string& Pizza::getName() const {
	return name;
}

void Pizza::setName(const string& name) {
	this->name = name;
}

double Pizza::getPrice() const {
	return price;
}

void Pizza::setPrice(double price) {
	this->price = price;
}
