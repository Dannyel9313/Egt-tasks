/*
 * FamiliarCar.h
 *
 *  Created on: 27.04.2017
 *      Author: Danny
 */

#ifndef FAMILIARCAR_H_
#define FAMILIARCAR_H_

#include "Car.h"

class FamiliarCar: public Car {
public:
	FamiliarCar();
	FamiliarCar(string marka, string model, string type, string color, int ramaNum,
		int regNumber, double fuelComsumption,double rentBill,double distancePerKm);
	virtual ~FamiliarCar();
	double getDistancePerKm() const;
	void setDistancePerKm(double distancePerKm);
	double getRentBill() const;
	void setRentBill(double rentBill);

	virtual double clientPay();

virtual void printInfo();
double qefficientDistance();

private:

	double rentBill;
	double distancePerKm;

};

#endif /* FAMILIARCAR_H_ */
