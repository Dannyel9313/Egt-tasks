/*
 * Delivery.cpp
 *
 *  Created on: 20.04.2017
 *      Author: Danny
 */

#include "Delivery.h"
#include <iostream>
using namespace std;


Delivery::~Delivery() {
	// TODO Auto-generated destructor stub
}

//vector<string>& Delivery::getPizzas() {
//	return pizzas;
//}
//
//void Delivery::setPizzas(vector<string>& pizzas) {
//	this->pizzas = pizzas;
//}

double Delivery::getPrice() const {
	return price;
}

void Delivery::setPrice(double price) {
	this->price = price;
}

const string& Delivery::getReciever() const {
	return reciever;
}

Delivery::Delivery(string reciever) {
	setReciever(reciever);
//	setPrice(price);
}

void Delivery::setReciever(const string& reciever) {
	this->reciever = reciever;
}

void Delivery::addPizza(Pizza& pizz) {
	pizzas.push_back(pizz);
}

void Delivery::calculateDeliveryPrice() {

	price=0;

	for(int i = 0; i < pizzas.size();i++){

		price = price + pizzas[i].getPrice();

	}
	cout << price << endl;
}

void Delivery::deliveryInfo() {
	cout << "Name : "<<getReciever();;

	cout << " / " << "Price of delivery is : ";
	calculateDeliveryPrice();
}
