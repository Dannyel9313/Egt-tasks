/*
 * OperandNew.h
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#ifndef OPERANDNEW_H_
#define OPERANDNEW_H_
#include "Car.h"
#include "FamiliarCar.h"
#include "Luxurycar.h"
#include <vector>
using namespace std;


class OperandNew {
public:
	OperandNew();
	virtual ~OperandNew();
	void addCar(Car& carOutside);
void printAllLuxCar();


private:
	vector<Car*> cars;
};

#endif /* OPERANDNEW_H_ */
