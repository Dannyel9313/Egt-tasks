/*
 * GrassWorker.h
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#ifndef GRASSWORKER_H_
#define GRASSWORKER_H_

#include "ParkWorker.h"

class GrassWorker: public ParkWorker {
public:
	GrassWorker();
	GrassWorker(string name, string middleName, string family, long egn,
			string address, int tel, string gander, double lvPerKvM,
			double area);
	virtual ~GrassWorker();
	double getArea() const;
	void setArea(double area);
	double getLvPerKvM() const;
	void setLvPerKvM(double lvPerKvM);
	int getBonusFine() const;
	void setBonusFine(int bonusFine);

	virtual double calculateSalary();
	virtual void printInfo();
double calcBonusFine();
private:

	double lvPerKvM;
	double area;
	int bonusFine;

};

#endif /* GRASSWORKER_H_ */
