/*
 * TreeWorker.cpp
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#include "TreeWorker.h"
#include <iostream>
#include <iomanip>
using namespace std;

TreeWorker::TreeWorker():ParkWorker() {
	setLvPerTree(0.0);
	setNumOfTrees(0);
	setBonus(0.0);

	// TODO Auto-generated constructor stub

}

TreeWorker::TreeWorker(string name, string middleName, string family, long egn,
		string address, int tel, string gander, double lvPerTree,
		int numOfTrees, double bonus):ParkWorker(name,middleName,family,egn,address,tel,gander) {
	setLvPerTree(lvPerTree);
	setNumOfTrees(numOfTrees);
	setBonus(bonus);

}

TreeWorker::~TreeWorker() {
	// TODO Auto-generated destructor stub
}

double TreeWorker::getBonus() const {
	return bonus;
}

void TreeWorker::setBonus(double bonus) {
	this->bonus = bonus;
}

double TreeWorker::getLvPerTree() const {
	return lvPerTree;
}

void TreeWorker::setLvPerTree(double lvPerTree) {
	this->lvPerTree = lvPerTree;
}

int TreeWorker::getNumOfTrees() const {
	return numOfTrees;
}

void TreeWorker::setNumOfTrees(int numOfTrees) {
	this->numOfTrees = numOfTrees;
}

void TreeWorker::printInfo() {
	ParkWorker::printInfo();
	cout << endl;
	cout <<setw(15) << "Salary per tree - " << getLvPerTree() << endl;
	cout <<setw(15) << "Number of trees - " << getNumOfTrees() << endl;
	if(getBonus() > 0){
		cout <<setw(15) << "Bonus - " << getBonus() << endl;

	}else
	{
		cout <<setw(15) << "Fine - " << getBonus() << endl;
	}
}

double TreeWorker::calculateSalary() {
	return getLvPerTree() * getNumOfTrees() * calculatePlus();
}

double TreeWorker::calculateBonus() {
	if(getNumOfTrees() < 150){
		setBonus(-250);
	}
	if(getNumOfTrees() > 300){
		setBonus(650);
	}
	return getBonus();
}

const string& TreeWorker::getWorkArea() const {
return workArea;
}

void TreeWorker::setWorkArea(const string& workArea) {
this->workArea = workArea;
}

double TreeWorker::calculatePlus() {
	double plus = 0;

	if(getWorkArea() == "town"){
		plus = 0.6;
	}
	if(getWorkArea() == "out of town"){
		plus = 0.3;
	}
	return plus;
}
