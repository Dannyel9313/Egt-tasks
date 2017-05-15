/*
 * Car.cpp
 *
 *  Created on: 27.04.2017
 *      Author: Danny
 */

#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() {
	setMarka(marka);
	setModel(model);
	setType(type);
	setColor(color);
	setRamaNum(ramaNum);
	setRegNumber(regNumber);
	setFuelComsumption(fuelComsumption);

	// TODO Auto-generated constructor stub

}

Car::~Car() {
	// TODO Auto-generated destructor stub
}

const string& Car::getColor() const {
	return color;
}

void Car::setColor(const string& color) {
	this->color = color;
}

double Car::getFuelComsumption() const {
	return fuelComsumption;
}

void Car::setFuelComsumption(double fuelComsumption) {
	this->fuelComsumption = fuelComsumption;
}

const string& Car::getMarka() const {
	return marka;
}

void Car::setMarka(const string& marka) {
	this->marka = marka;
}

const string& Car::getModel() const {
	return model;
}

void Car::setModel(const string& model) {
	this->model = model;
}

int Car::getRamaNum() const {
	return ramaNum;
}

void Car::setRamaNum(int ramaNum) {
	this->ramaNum = ramaNum;
}

int Car::getRegNumber() const {
	return regNumber;
}

void Car::setRegNumber(int regNumber) {
	this->regNumber = regNumber;
}

const string& Car::getType() const {
	return type;
}

void Car::setType(const string& type) {
	this->type = type;
}

Car::Car(string marka, string model, string type, string color, int ramaNum,
		int regNumber, double fuelComsumption) {
	setMarka(marka);
		setModel(model);
		setType(type);
		setColor(color);
		setRamaNum(ramaNum);
		setRegNumber(regNumber);
		setFuelComsumption(fuelComsumption);
}


void Car::printInfo(){
	cout << "Info for a car : " <<"\n"<<getMarka()<< "\n"<<getModel() <<"\n" <<getType()
			<< "\n"<<getColor() <<"\n"<< getRamaNum() <<"\n"<<getRegNumber()<<"\n"<<getFuelComsumption();








}

double Car::clientPay() {
	return 0;
}
