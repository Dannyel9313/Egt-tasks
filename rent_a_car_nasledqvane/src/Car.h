/*
 * Car.h
 *
 *  Created on: 27.04.2017
 *      Author: Danny
 */

#ifndef CAR_H_
#define CAR_H_
#include <string>
using namespace std;

class Car {
public:
	Car();
	Car(string marka,string model, string type, string color, int ramaNum, int regNumber,double fuelComsumption);
	virtual ~Car();
	const string& getColor() const;
	void setColor(const string& color);
	double getFuelComsumption() const;
	void setFuelComsumption(double fuelComsumption);
	const string& getMarka() const;
	void setMarka(const string& marka);
	const string& getModel() const;
	void setModel(const string& model);
	int getRamaNum() const;
	void setRamaNum(int ramaNum);
	int getRegNumber() const;
	void setRegNumber(int regNumber);
	const string& getType() const;
	void setType(const string& type);

	virtual double clientPay();
	virtual void printInfo();

private:

	string marka;
	string model;
	string type;
	string color;
	int ramaNum;
	int regNumber;
	double fuelComsumption;

};

#endif /* CAR_H_ */
