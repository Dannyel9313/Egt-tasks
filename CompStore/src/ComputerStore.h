/*
 * ComputerStore.h
 *
 *  Created on: 28.05.2017
 *      Author: Danny
 */

#ifndef COMPUTERSTORE_H_
#define COMPUTERSTORE_H_
#include <string>
using namespace std;

class ComputerStore {
public:
	ComputerStore();
	ComputerStore(int position, string nameOfComputer, int numbers, double price);
	virtual ~ComputerStore();
	const string& getNameOfComputer() const;
	void setNameOfComputer(const string& nameOfComputer);
	int getNumbers() const;
	void setNumbers(int numbers);
	int getPosition() const;
	void setPosition(int position);
	double getPrice() const;
	void setPrice(double price);

void CreateNewLists(const char*,int);

void FillNewLists(const char*);

void CreateTextFile();

void UpdateRecord();

void NewRecord();

void DeleteRecord();



private:

	int position;
	string nameOfComputer;
	int numbers;
	double price;


};

#endif /* COMPUTERSTORE_H_ */
