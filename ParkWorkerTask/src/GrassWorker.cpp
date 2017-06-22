/*
 * GrassWorker.cpp
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#include "GrassWorker.h"
#include <iostream>
#include <iomanip>
using namespace std;

GrassWorker::GrassWorker():ParkWorker() {


	setLvPerKvM(0.0);
		setArea(0.0);
	// TODO Auto-generated constructor stub

}

GrassWorker::~GrassWorker() {
	// TODO Auto-generated destructor stub
}

double GrassWorker::getArea() const {
	return area;
}

void GrassWorker::setArea(double area) {
	this->area = area;
}

double GrassWorker::getLvPerKvM() const {
	return lvPerKvM;
}

GrassWorker::GrassWorker(string name, string middleName, string family,
		long egn, string address, int tel, string gander, double lvPerKvM,
		double area):ParkWorker(name,middleName,family,egn,address,tel,gander) {
	setLvPerKvM(lvPerKvM);
	setArea(area);
}

void GrassWorker::setLvPerKvM(double lvPerKvM) {
	this->lvPerKvM = lvPerKvM;
}

double GrassWorker::calculateSalary() {
	return getLvPerKvM() * getArea();
}

void GrassWorker::printInfo() {
	ParkWorker::printInfo();
	cout << endl;
	cout <<setw(15) << "Salary per hour - " << getLvPerKvM() << endl;
	cout <<setw(15) << "Worked area - " << getArea() << endl;
	if(getBonusFine() < 5000){
		cout <<setw(15) << "Worker is fined - " <<getBonusFine() << endl;

	}
	else
	{
		cout <<setw(15) << "Worker have bonus - " << getBonusFine() << endl;
	}
}

int GrassWorker::getBonusFine() const {
	return bonusFine;
}

void GrassWorker::setBonusFine(int bonusFine) {
	this->bonusFine = bonusFine;
}

double GrassWorker::calcBonusFine() {
	if(getArea() < 5000){
		setBonusFine(-200);

	}
	if(getArea() > 10000){
		setBonusFine(500);

	}
	return getBonusFine();
}
