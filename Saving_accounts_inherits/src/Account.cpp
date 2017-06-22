/*
 * Account.cpp
 *
 *  Created on: 28.04.2017
 *      Author: Danny
 */

#include "Account.h"
#include <iostream>
using namespace std;



Account::~Account() {
	// TODO Auto-generated destructor stub
}

double Account::getBalance() const {
	return balance;
}

Account::Account(double balance) {
	if(balance >= 0){
		setBalance(balance);
	}else
	{
		cout << "Your balance is invalid !!!" << endl;
		setBalance(0.0);

	}

}

void Account::setBalance(double balance) {
	this->balance = balance;
}

void Account::credit(double amount) {
double newBalance = 0;

newBalance = amount + getBalance();
setBalance(newBalance);

}

Account::Account() {
	setBalance(0.0);
}

void Account::debit(double money) {

	if(getBalance() > money){
		double	newBalance = 0;
		newBalance = getBalance() - money;

		setBalance(newBalance);
	}else
	{
		cout << "Debit amount exceeded account balance."<< " / ";
		 getBalance();
	}

}
