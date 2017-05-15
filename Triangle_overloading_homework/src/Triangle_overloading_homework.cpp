//============================================================================
// Name        : Triangle_overloading_homework.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {


	Triangle triangle1;
	Triangle triangle2;

	cin >> triangle1;
	cin >> triangle2;
	cout << triangle1 << endl;
	cout << "//////////" << endl;
	cout << triangle2 << endl;

	if(triangle1 == triangle2){
		cout << "The triangles are equivalent" << endl;

	}else
	{
		cout << "The triangle are not equivalent" << endl;

	}
if(triangle1 != triangle2) {
	cout << "The triangles ARE NOT EQUIVALENT" << endl;
}else
{
	cout << "The triangles ARE EQUIVALENT" << endl;
}


	return 0;
}
