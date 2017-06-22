/*
 * ParkWorker.cpp
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#include "ParkWorker.h"
#include <iomanip>
#include <iostream>
using namespace std;

ParkWorker::ParkWorker() {
	setName("N/A");
	setMiddleName("N/A");
	setFamily("N/A");
	setEgn(0000000000);
	setAddress("N/A");
	setTel(0000000000);
	setGander("N/A");
	// TODO Auto-generated constructor stub

}

ParkWorker::~ParkWorker() {
	// TODO Auto-generated destructor stub
}

const string& ParkWorker::getAddress() const {
	return address;
}

void ParkWorker::setAddress(const string& address) {
	this->address = address;
}

long ParkWorker::getEgn() const {
	return egn;
}

void ParkWorker::setEgn(long egn) {
	this->egn = egn;
}

const string& ParkWorker::getFamily() const {
	return family;
}

void ParkWorker::setFamily(const string& family) {
	this->family = family;
}

const string& ParkWorker::getGander() const {
	return gander;
}

void ParkWorker::setGander(const string& gander) {
	this->gander = gander;
}

const string& ParkWorker::getMiddleName() const {
	return middleName;
}

void ParkWorker::setMiddleName(const string& middleName) {
	this->middleName = middleName;
}

const string& ParkWorker::getName() const {
	return name;
}

void ParkWorker::setName(const string& name) {
	this->name = name;
}

int ParkWorker::getTel() const {
	return tel;
}

ParkWorker::ParkWorker(string name, string middleName, string family, long egn,
		string address, int tel, string gander) {
	setName(name);
	setMiddleName(middleName);
	setFamily(family);
	setEgn(egn);
	setAddress(address);
	setTel(tel);
	setGander(gander);
}

void ParkWorker::setTel(int tel) {
	this->tel = tel;
}

void ParkWorker::printInfo() {
	cout << "The worker:"<< endl;
	cout <<setw(15) << "Name - " << getName()<< endl;
	cout <<setw(15) << "Middlename - "<< getMiddleName()<<endl;
	cout <<setw(15) << "Family - " << getFamily() << endl;
	cout <<setw(15) << "Egn - " << getEgn() << endl;
	cout <<setw(15) << "Address - " << getAddress() << endl;
	cout <<setw(15) << "Telephone - " << getTel() << endl;
	cout <<setw(15) << "Gander - " << getGander() << endl;
}

double ParkWorker::calculateSalary() {
	return 0;
}
