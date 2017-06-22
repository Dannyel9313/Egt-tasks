/*
 * Client.cpp
 *
 *  Created on: 20.04.2017
 *      Author: Danny
 */

#include "Client.h"
#include <iostream>
using namespace std;

Client::~Client() {
	// TODO Auto-generated destructor stub
}

const vector<Address>& Client::getAdreses() const {
	return adreses;
}

void Client::setAdreses(const vector<Address>& adreses) {
	this->adreses = adreses;
}

const string& Client::getName() const {
	return name;
}

Client::Client(string name) {
	setName(name);
}

void Client::addAddress(Address& adr) {
	adreses.push_back(adr);
}
void Client::setName(const string& name) {
	this->name = name;
}

void Client::printAddress() {

cout << "Your addresses are :"<< endl;
for(unsigned int i = 0; i < adreses.size();i++){
	adreses[i].print();
}


}
void Client::deleteAddress(int id) {
	adreses.erase(adreses.begin()+ id);
}
