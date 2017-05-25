/*
 * operations.h
 *
 *  Created on: 23.05.2017
 *      Author: Danny
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include "Book.h"
#include "pugixml.hpp"
#include <vector>
using namespace std;


class operations {
public:
	operations();
	virtual ~operations();

	void copyToVector();
	void printBooksInfo();



private:
	vector<Book*> booksVector;

};

#endif /* OPERATIONS_H_ */
