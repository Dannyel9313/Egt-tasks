/*
 * OperandNew.cpp
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#include "OperandNew.h"
#include <iostream>
using namespace std;

OperandNew::OperandNew() {
	// TODO Auto-generated constructor stub

}

OperandNew::~OperandNew() {
	// TODO Auto-generated destructor stub
}

void OperandNew::addCar(Car& carOutside) {
	cars.push_back(&carOutside);
//	podavame adresite na obektite
}

void OperandNew::printAllLuxCar() {
	for(unsigned int i = 0; i < cars.size(); i++){
		cars[i]->printInfo();

cout<<endl;
cout << "LuxuryCar has to pay :";
		if(Luxurycar* ptr = dynamic_cast<Luxurycar*>(cars[i])){                                    // taka se downcastva !!! s if proverka !!!
	cout <<	ptr->clientPay();
	cout << endl;
		}else
		{
			cout << "The car is not Luxury" << endl;
		}
cout << endl;
	}

}
