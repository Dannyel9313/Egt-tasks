/*
 * Currency.cpp
 *
 *  Created on: 30.05.2017
 *      Author: Danny
 */

#include "Currency.h"
#include <sstream>
#include <iostream>
using namespace std;

Currency::Currency() {
	// TODO Auto-generated constructor stub

}

Currency::~Currency() {
	// TODO Auto-generated destructor stub
}

string Currency::FormatCurrency(double value, string currency)
{
 cout << "Enter the value ;" << endl;
	stringstream ss;
	string result = "";
	ss << value;
	ss >> result;
	result.append(" " + currency);

	return result;



}
