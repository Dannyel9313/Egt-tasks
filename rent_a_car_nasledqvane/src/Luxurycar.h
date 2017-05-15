/*
 * Luxurycar.h
 *
 *  Created on: 27.04.2017
 *      Author: Danny
 */

#ifndef LUXURYCAR_H_
#define LUXURYCAR_H_
#include <string>
using namespace std;
#include "Car.h"

class Luxurycar: public Car {
public:
	Luxurycar();
	Luxurycar(string marka, string model, string type, string color, int ramaNum,
		int regNumber, double fuelComsumption, double rentTax,double clientDistance, string extras);

	virtual ~Luxurycar();
	double getClientDistance() const;
	void setClientDistance(double clientDistance);
	const string& getExtras() const;
	void setExtras(const string& extras);
	double getRentTax() const;
	void setRentTax(double rentTax);


virtual void printInfo();

virtual double clientPay();
double qefficientDistance();
int qefficientExtras();
private:

	double rentTax;
	double clientDistance;
	string extras;
};

#endif /* LUXURYCAR_H_ */
