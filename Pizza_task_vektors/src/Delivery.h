/*
 * Delivery.h
 *
 *  Created on: 20.04.2017
 *      Author: Danny
 */
#include <string>
#ifndef DELIVERY_H_
#define DELIVERY_H_
using namespace std;
#include <vector>
#include "Pizza.h"

class Delivery {
public:
	Delivery(string);
	virtual ~Delivery();
	vector<string>& getPizzas();
	void setPizzas( vector<string>& pizzas);
	double getPrice() const;
	void setPrice(double price);
	const string& getReciever() const;
	void setReciever(const string& reciever);

void addPizza(Pizza& );

void deliveryInfo();

private:
    void calculateDeliveryPrice();

	string reciever;
	double price;
	vector<Pizza>pizzas;



};

#endif /* DELIVERY_H_ */
