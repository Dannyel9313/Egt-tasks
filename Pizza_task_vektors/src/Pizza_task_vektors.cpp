//============================================================================
// Name        : Pizza_task_vektors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Client.h"
#include "Delivery.h"
#include <iostream>
using namespace std;

int main() {

Client first("Delio");

cout << first.getName()<< endl;

Address home(1, "Kolio Shishmanov", 59);
Address office(2, "Ivan Stracimir", 3);
Address friendOfMine(3, "Ivan Asen", 36);

first.addAddress(home);
first.addAddress(office);
first.addAddress(friendOfMine);

first.printAddress();

first.deleteAddress(1);

first.printAddress();

cout << "///////////////////"<< endl;

Pizza p1("Dijona", 12.5);
Pizza p2("Formadji", 7.99);
Pizza p3("Amazoniq", 22.15);

Delivery myDelivery("Azzz");

myDelivery.addPizza(p1);
myDelivery.addPizza(p2);
myDelivery.addPizza(p3);

myDelivery.deliveryInfo();




	return 0;
}
