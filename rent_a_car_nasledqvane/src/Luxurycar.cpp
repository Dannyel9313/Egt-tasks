/*
 * Luxurycar.cpp
 *
 *  Created on: 27.04.2017
 *      Author: Danny
 */

#include "Luxurycar.h"
#include <iostream>
using namespace std;

Luxurycar::Luxurycar():Car() {
	setRentTax(0);
	setClientDistance(0);
	setExtras(0);

}

Luxurycar::~Luxurycar() {
	// TODO Auto-generated destructor stub
}

double Luxurycar::getClientDistance() const {
	return clientDistance;
}

void Luxurycar::setClientDistance(double clientDistance) {
	this->clientDistance = clientDistance;
}

const string& Luxurycar::getExtras() const {
	return extras;
}

void Luxurycar::setExtras(const string& extras) {
	this->extras = extras;
}

double Luxurycar::getRentTax() const {
	return rentTax;
}

Luxurycar::Luxurycar(string marka, string model, string type, string color,
		int ramaNum, int regNumber, double fuelComsumption, double rentTax,
		double clientDistance, string extras):Car(marka, model, type, color, ramaNum, regNumber, fuelComsumption) {
	setRentTax(rentTax);
		setClientDistance(clientDistance);
		setExtras(extras);
}

void Luxurycar::setRentTax(double rentTax) {
	this->rentTax = rentTax;
}

int Luxurycar::qefficientExtras() {
	if(extras == "chokolade"){
		return 40;
	}else{
		if(extras == "wine"){
			return 50;
		}else{
			if(extras == "shampaigne"){
				return 100;
			}
		}
	}
	return 0;
}

double Luxurycar::qefficientDistance() {
	if(clientDistance < 200){
		return 0.6;
	}
	return 0.4;
}


double Luxurycar::clientPay() {
	return rentTax * qefficientDistance() + qefficientExtras();
}

void Luxurycar::printInfo() {
	cout << "The car : ";
	Car::printInfo();
	cout << "Tax for rent :" << getRentTax() << endl;
		cout << "Distance is :" << getClientDistance()<< endl;
		cout << "The extras is :" << getExtras() << endl;
}
