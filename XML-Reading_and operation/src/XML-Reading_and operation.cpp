//============================================================================
// Name        : XML-Reading_and.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Menu.h"
#include "pugixml.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include "operations.h"
using namespace std;




int main() {



Operations object;
object.loadXmlAndPushInVector();
cout << endl;
//object.printMenuByVector();
//object.serchByArticleNumber(5);
object.createTextFile();
	return 0;
}
