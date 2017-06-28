/*
 * PrintingArray.cpp
 *
 *  Created on: 30.05.2017
 *      Author: Danny
 */

#include "PrintingArray.h"
#include <iostream>
using namespace std;

PrintingArray::PrintingArray() {
	// TODO Auto-generated constructor stub

}

PrintingArray::~PrintingArray() {
	// TODO Auto-generated destructor stub
}

void PrintingArray::PrintArray(int array[], int size) {

	for(int i = 0; i < size; i++)
	{
		cout << array[i] << "\t";
	}

}
