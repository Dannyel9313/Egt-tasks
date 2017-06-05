//============================================================================
// Name        : XML-Students_exercises.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include "Operations.h"
#include "pugixml.hpp"
using namespace std;

int main() {

	Operations operation;

//	operation.ReadingFromFile();
operation.ReadingFromFileAndPushInMap();
	cout <<endl;
	operation.PrintSudentsByMap();
	cout << "////////" << endl;
//operation.PrintSudentsByMap();
operation.deleteLowGradesStudent();
cout << endl;
operation.PrintSudentsByMap();
operation.CreateNewBinaryFile("ExellentStudents.dat");
	return 0;
}
