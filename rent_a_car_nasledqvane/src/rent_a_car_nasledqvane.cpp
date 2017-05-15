//============================================================================
// Name        : rent_a_car_nasledqvane.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "FamiliarCar.h"
#include "Luxurycar.h"
#include "OperandNew.h"
int main() {


//Luxurycar lcar1("Mercedes", "s500", "limusine", "black", 78945,1111,10.1,100,100,"wine");
//Luxurycar lcar2("Mercedes", "s350", "limusine", "orange", 56421,1234,12.5,100,100,"shampaigne");
//Luxurycar lcar3("BmW", "528", "limusine", "orange", 98432,2222,8.1,100,100,"chokolade");
//
//FamiliarCar fcar1("Opel", "Kadet", "leka", "red", 98546,5124, 7.8,20,120);
//FamiliarCar fcar2("Opel", "Tigra", "leka", "blue", 94946,5125, 8,20,100);
//FamiliarCar fcar3("Mazda", "323", "leka", "yellow", 91235,5518, 5.6,20,200);

//Operand oper;
//
//oper.addFamiliarCar(fcar1);
//oper.addFamiliarCar(fcar2);
//oper.addFamiliarCar(fcar3);
//oper.addLuxuryCar(lcar1);
//oper.addLuxuryCar(lcar2);
//oper.addLuxuryCar(lcar3);
//
//oper.printInfo();

Luxurycar *luxCar1 = new Luxurycar("Mercedes", "s500", "limusine", "black", 78945,1111,10.1,100,100,"wine");
Luxurycar *luxCar2 = new Luxurycar("BmW", "528", "limusine", "orange", 98432,2222,8.1,100,100,"chokolade");
FamiliarCar *famCar1 = new FamiliarCar("Opel", "Kadet", "leka", "red", 98546,5124, 7.8,20,120);
FamiliarCar *famCar2 = new FamiliarCar("Mazda", "323", "leka", "yellow", 91235,5518, 5.6,20,200);

OperandNew operand;

operand.addCar(*luxCar1);
operand.addCar(*luxCar2);
operand.addCar(*famCar1);
operand.addCar(*famCar2);


operand.printAllLuxCar();



	return 0;
}
