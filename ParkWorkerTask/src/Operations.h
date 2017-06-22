/*
 * Operations.h
 *
 *  Created on: 16.05.2017
 *      Author: Danny
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include "TreeWorker.h"
#include <vector>
using namespace std;

class Operations {
public:
	Operations();
	virtual ~Operations();

	void addWorker(Operations& outsideObj);
	void printInfo();
	void printSalaryTreeWorker();

private:

vector<Operations*> operation;


};

#endif /* OPERATIONS_H_ */
