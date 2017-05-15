/*
 * FamiliarCar.cpp
 *
 *  Created on: 27.04.2017
 *      Author: Danny
 */

#include "FamiliarCar.h"
#include <iostream>
using namespace std;

FamiliarCar::FamiliarCar():Car() {
	setRentBill(0);
	setDistancePerKm(0);


}

FamiliarCar::~FamiliarCar() {
	// TODO Auto-generated destructor stub
}

double FamiliarCar::getDistancePerKm() const {
	return distancePerKm;
}

void FamiliarCar::setDistancePerKm(double distancePerKm) {
	this->distancePerKm = distancePerKm;
}

double FamiliarCar::getRentBill() const {
	return rentBill;
}

FamiliarCar::FamiliarCar(string marka, string model, string type, string color,
		int ramaNum, int regNumber, double fuelComsumption, double rentBill,
		double distancePerKm):Car(marka, model, type, color, ramaNum, regNumber, fuelComsumption) {
	setRentBill(rentBill);
		setDistancePerKm(distancePerKm);
}

void FamiliarCar::setRentBill(double rentBill) {
	this->rentBill = rentBill;
}

double FamiliarCar::clientPay() {
	return rentBill * qefficientDistance();
}

double FamiliarCar::qefficientDistance() {
	if(distancePerKm < 500){
		return 0.7;

	}else{
		return 0.4;
	}
}

void FamiliarCar::printInfo() {
	cout << "The car :";
	Car::printInfo();
	cout << "Tax for rent :" << getRentBill() << endl;
	cout << "Distance is :" << getDistancePerKm()<< endl;
}
