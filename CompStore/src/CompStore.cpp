//============================================================================
// Name        : CompStore.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "ComputerStore.h"
using namespace std;



int enterChoice();


enum Choices {CREATE = 1, PRINT, UPDATE, DELETE, ADD, END};



int main() {

	ComputerStore compStore;

int choice;


while((choice = enterChoice()) != END)
{
	switch(choice)
	{
	case CREATE:
		cout << "Enter the name and size of file !" << endl;
		char * name;
		int size;
		cin >> name,size;
		compStore.CreateNewLists(name,size);
		break;
	case PRINT:
		compStore.CreateTextFile();
		break;
	case UPDATE:
		compStore.UpdateRecord();
		break;
	case DELETE:
		compStore.DeleteRecord();
		break;
	case ADD:
		compStore.NewRecord();
		break;
	default :
		cerr << "incorect choice !" << endl;
		break;
	}

choice= enterChoice();

}



	return 0;
}



int enterChoice()
{
   // display available options
   cout << "\nEnter your choice" << endl
		   <<"1 - create a new list.dat file" << endl
      << "2 - store a formatted text file of accounts" << endl
      << "    called \"print.txt\" for printing" << endl
      << "3 - update an account" << endl
      << "4 - delete an account" << endl
      << "5 - add a new account" << endl

      << "6 - end program\n? ";

   int choice;
   cin >> choice;
   return choice;
}
