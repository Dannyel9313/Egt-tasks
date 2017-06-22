/*
 * Pizza.h
 *
 *  Created on: 20.04.2017
 *      Author: Danny
 */
#include <string>
#ifndef PIZZA_H_
#define PIZZA_H_
using namespace std;

class Pizza {
public:
	Pizza(string, double);
	virtual ~Pizza();
	const string& getName() const;
	void setName(const string& name);
	double getPrice() const;
	void setPrice(double price);

private:

	string name;
	double price;

};

#endif /* PIZZA_H_ */
