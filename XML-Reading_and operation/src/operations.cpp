/*
 * operations.cpp
 *
 *  Created on: 25.05.2017
 *      Author: Danny
 */
#include "pugixml.hpp"
#include "operations.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

Operations::Operations() {
	// TODO Auto-generated constructor stub

}

Operations::~Operations() {
	// TODO Auto-generated destructor stub
}

void Operations::loadXmlAndPushInVector() {
string name,price,description;
int calories;
	pugi::xml_document doc;

	if(!doc.load_file("menu-xml.xml")){

		cerr << "The file could not be read !" << endl;
		exit(1);

	}else
	{
		cout << "The file is readed successfully !" << endl;
	}

	pugi::xml_node breakfastMenu = doc.child("breakfast_menu");


for(pugi::xml_node food = breakfastMenu.first_child(); food; food = food.next_sibling()){
name = food.child("name").text().as_string();
price = food.child("price").text().as_string();
description = food.child("description").text().as_string();
calories = food.child("calories").text().as_int();

Menu *newObject = new Menu(name,price,description,calories);

menuVector.push_back(newObject);

}
if(menuVector.size() != 0)
{
	cout << "Vector is ready !" << endl;
}else
{
	cout << "Vector is not ready!" << endl;
}


}

void Operations::printMenuByVector() {

	for(unsigned int i = 0; i < menuVector.size();i++){
		cout << "Article " << i + 1 << endl;
		menuVector[i]->printMenuInfo();
		cout << "////////////////" << endl;
	}

}

void Operations::serchByArticleNumber(int number) {

int numberArticle = number - 1;
	menuVector.at(numberArticle)->printMenuInfo();

}

void Operations::createTextFile() {

ofstream outMenuFile( "Menu.txt" , ios::out);

if(!outMenuFile){
	cerr << "The file could not be created !" << endl;
	exit(1);
}else
{
	cout << "The file is created !" << endl;
}

string name,price,description;
int calories,numOfPlace;

Operations object;

outMenuFile <<left<< setw(5) << "#" << setw(35) << "Name" << setw(10) << "Price" << setw(100) << "Description" << setw(6) << "Calories"<< endl;
//for(unsigned int i = 0; i < menuVector.size();i++)
for(unsigned int i = 0; i < menuVector.size();i++){
	numOfPlace = i + 1 ;
	name = menuVector[i]->getName();
	price = menuVector[i]->getPrice();
	description = menuVector[i]->getDescription();
	calories = menuVector[i]->getCalories();

	outMenuFile<<left<< setw(5) << numOfPlace << setw(35) << name << setw(10) << price << setw(100) << description << setw(6)<< right << calories<< endl;
}

}
