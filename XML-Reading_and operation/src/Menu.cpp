/*
 * Menu.cpp
 *
 *  Created on: 25.05.2017
 *      Author: Danny
 */

#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu() {
	setName("");
	setPrice("");
	setDescription("");
	setCalories(0);
	// TODO Auto-generated constructor stub

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

int Menu::getCalories() const {
	return calories;
}

void Menu::setCalories(int calories) {
	this->calories = calories;
}

const string& Menu::getDescription() const {
	return description;
}

void Menu::setDescription(const string& description) {
	this->description = description;
}

const string& Menu::getName() const {
	return name;
}

void Menu::setName(const string& name) {
	this->name = name;
}



Menu::Menu(string name, string price, string description, int calories) {
	setName(name);
		setPrice(price);
		setDescription(description);
		setCalories(calories);
}



void Menu::printMenuInfo() {

	cout << "Name : " << getName() << "\n"
			<< "Price : " << getPrice() << "\n"
			<< "Description : " << getDescription() << "\n"
			<< "Calories : " << getCalories() << endl;

}

const string& Menu::getPrice() const {
	return price;
}

void Menu::setPrice(const string& price) {
	this->price = price;
}
