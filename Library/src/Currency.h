/*
 * Currency.h
 *
 *  Created on: 30.05.2017
 *      Author: Danny
 */

#ifndef CURRENCY_H_
#define CURRENCY_H_
#include <string>
using namespace std;

class Currency {
public:
	Currency();
	virtual ~Currency();

	string FormatCurrency(double value, string currency);

};

#endif /* CURRENCY_H_ */
