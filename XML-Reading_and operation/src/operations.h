/*
 * operations.h
 *
 *  Created on: 25.05.2017
 *      Author: Danny
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include <vector>
#include <string>
#include "Menu.h"
using namespace std;

class Operations {
public:
	Operations();
	virtual ~Operations();

	void loadXmlAndPushInVector();

	void printMenuByVector();
	void serchByArticleNumber(int number);

	void createTextFile();


private:

	vector<Menu*> menuVector;

};

#endif /* OPERATIONS_H_ */
