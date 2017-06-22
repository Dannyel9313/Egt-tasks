/*
 * Operations.cpp
 *
 *  Created on: 16.05.2017
 *      Author: Danny
 */

#include "Operations.h"
#include <iostream>
using namespace std;


Operations::Operations() {
	// TODO Auto-generated constructor stub

}

Operations::~Operations() {
	// TODO Auto-generated destructor stub
}

void Operations::addWorker(Operations& outsideObj) {
	operation.push_back(&outsideObj);
}

void Operations::printInfo() {
	for(unsigned int i = 0; i < operation.size(); i++){
		operation[i]->printInfo();
	}
}

void Operations::printSalaryTreeWorker() {
	for(unsigned int i = 0; i < operation.size(); i++){
		if(TreeWorker* ptr = dynamic_cast<TreeWorker*>(operation[i])){
		cout <<"Tree worker salary is" <<	ptr->calculateSalary();
		}else
		{
			cout << "No tree worker" << endl;
		}

	}
}
