/*
 * ComputerStore.cpp
 *
 *  Created on: 28.05.2017
 *      Author: Danny
 */

#include "ComputerStore.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;



ComputerStore::ComputerStore() {

	setPosition(0);
	setNameOfComputer("");
	setNumbers(0);
	setPrice(0.0);
	// TODO Auto-generated constructor stub

}

ComputerStore::~ComputerStore() {
	// TODO Auto-generated destructor stub
}

const string& ComputerStore::getNameOfComputer() const {
	return nameOfComputer;
}

void ComputerStore::setNameOfComputer(const string& nameOfComputer) {
	this->nameOfComputer = nameOfComputer;
}

int ComputerStore::getNumbers() const {
	return numbers;
}

void ComputerStore::setNumbers(int numbers) {
	this->numbers = numbers;
}

int ComputerStore::getPosition() const {
	return position;
}

void ComputerStore::setPosition(int position) {
	this->position = position;
}

double ComputerStore::getPrice() const {
	return price;
}

ComputerStore::ComputerStore(int position, string nameOfComputer, int numbers,
		double price) {
	setPosition(position);
	setNameOfComputer(nameOfComputer);
	setNumbers(numbers);
	setPrice(price);
}

void ComputerStore::setPrice(double price) {
	this->price = price;
}

void ComputerStore::CreateNewLists(const char* nameOfFile,int size) {

	ofstream createBinaryFile(nameOfFile, ios::out | ios::binary);

	if (!createBinaryFile) {
		cerr << "The file could not be created !" << endl;
		exit(1);
	} else {
		cout << "The file is created !" << endl;
	}

	ComputerStore compStore;

	for (int i = 0; i < size; i++) {
		createBinaryFile.write(reinterpret_cast<char*>(&compStore),
				sizeof(ComputerStore));
	}

	cout << "The file is created successfully for " << size << " records !";
}

void ComputerStore::FillNewLists(const char* nameOfFile) {

	fstream writeInFile(nameOfFile, ios::in | ios::out);

if(!writeInFile)
{
	cerr << "The file Could not be opened !" << endl;
	exit(1);

}

int position;
	string nameOfComputer;
	int numbers;
	double price;


	cout << "Enter the position of computer ( 0 - 100 )" << endl;

	ComputerStore compStore;

	cin >> position;

	while(position > 0 && position <= 100)
	{
		cout << "Enter the Name of computer, numbers of computer and price." << endl;
		cin >> nameOfComputer;
		cin >> numbers;
		cin >> price;


		compStore.setPosition(position);
		compStore.setNameOfComputer(nameOfComputer);
		compStore.setNumbers(numbers);
		compStore.setPrice(price);

		writeInFile.write(reinterpret_cast<char*>(&compStore), sizeof(ComputerStore));

		cout << "Enter the position of computer ( 0 - 100 )" << endl;
		cin >> position;

	}




}

void ComputerStore::CreateTextFile() {



	ifstream readFromFile("laptops.dat", ios::in | ios::binary);

	if(!readFromFile)
	{
		cerr << "The file could not be read ! " << endl;
		exit(1);
	}

	ofstream createNewTextFile("laptops.txt", ios::out);

		if(!createNewTextFile)
		{
			cerr << "The file could not be created !" << endl;
			exit(1);
		}

createNewTextFile << left << setw(5) << "#" << setw(20) << "Computer name"
		<<setw(10) << "Numbers" << setw(10) << "price" << endl;

readFromFile.seekg(0);

ComputerStore compStore;

readFromFile.read(reinterpret_cast<char*>(&compStore), sizeof(ComputerStore));

while(!readFromFile.eof())
{
	if(compStore.getPosition() != 0)
	{
		createNewTextFile<< left << setw(5) << compStore.getPosition() << setw(20) << compStore.getNameOfComputer()
				<<setw(10) << compStore.getNumbers() << setw(10) << compStore.getPrice() << endl;


		cout << left << setw(5) << compStore.getPosition() << setw(20) << compStore.getNameOfComputer()
						<<setw(10) << compStore.getNumbers() << setw(10) << compStore.getPrice() << endl;


		readFromFile.read(reinterpret_cast<char*>(&compStore), sizeof(ComputerStore));
	}



}





}

void ComputerStore::UpdateRecord() {


	fstream readFromFile("laptops.dat", ios::in | ios::out);

	if(!readFromFile)
	{
		cerr << "The file could not be read ! " << endl;
		exit(1);
	}

	int position;
	cout << "Enter the position of computer, which price you want to update !" << endl;
	cin >> position;
	readFromFile.seekp((position - 1 ) * sizeof(ComputerStore));

	ComputerStore compStore;

	readFromFile.read(reinterpret_cast<char*>(&compStore), sizeof(ComputerStore));

	if(compStore.getPosition() != 0)
	{

		cout << left << setw(5) << compStore.getPosition() << setw(20) << compStore.getNameOfComputer()
						<<setw(10) << compStore.getNumbers() << setw(10) << compStore.getPrice() << endl;

	int newPrice;
	cout << "Enter the new Price !"<< endl;
	cin >> newPrice;

	compStore.setPrice(newPrice);

	cout << left << setw(5) << compStore.getPosition() << setw(20) << compStore.getNameOfComputer()
							<<setw(10) << compStore.getNumbers() << setw(10) << compStore.getPrice() << endl;

readFromFile.seekp((position - 1) * sizeof(ComputerStore));

readFromFile.write(reinterpret_cast<char*>(&compStore),sizeof(ComputerStore));

	}else
	{
		cout << "Record on position " << compStore.getPosition() << " has no information !" << endl;
	}
}

void ComputerStore::NewRecord() {

	fstream readFromFile("laptops.dat", ios::in | ios::out);

	if(!readFromFile)
	{
		cerr << "The file could not be read ! " << endl;
		exit(1);
	}

	int position;
	string nameOfComputer;
		int numbers;
		double price;
	cout << "Enter the position of new computer in file !" << endl;
	cin >> position;
	readFromFile.seekg((position - 1 ) * sizeof(ComputerStore));

	ComputerStore compStore;

	readFromFile.read(reinterpret_cast<char*>(&compStore), sizeof(ComputerStore));

	if(compStore.getPosition() == 0)
	{
		cout << "Enter the new computer name, numbers and price." << endl;
		cin >> nameOfComputer;
		cin >> numbers;
		cin >> price;


		compStore.setPosition(position);
		compStore.setNameOfComputer(nameOfComputer);
		compStore.setNumbers(numbers);
		compStore.setPrice(price);

		readFromFile.seekp((position - 1) * sizeof(ComputerStore));

		readFromFile.write(reinterpret_cast<char*>(&compStore), sizeof(ComputerStore));
	}else
	{
		cout << "In this position already exist information !" << endl;
	}

}

void ComputerStore::DeleteRecord() {
	fstream readFromFile("laptops.dat", ios::in | ios::out);

		if(!readFromFile)
		{
			cerr << "The file could not be read ! " << endl;
			exit(1);
		}

		int position;
		string nameOfComputer;
			int numbers;
			double price;
		cout << "Enter the position of article you want to delete !" << endl;
		cin >> position;
		readFromFile.seekg((position - 1 ) * sizeof(ComputerStore));

		ComputerStore compStore;

		readFromFile.read(reinterpret_cast<char*>(&compStore), sizeof(ComputerStore));

		if(compStore.getPosition() != 0)
		{
//			ComputerStore blankStore;
			readFromFile.seekp((position - 1) * sizeof(ComputerStore));


			readFromFile.write(reinterpret_cast<char*>(&compStore), sizeof(ComputerStore));

			cout << "The computer has been deleted !" << endl;
		}else
		{
			cout << "The position is empty !" << endl;

		}




}
