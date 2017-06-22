/*
 * CheckingAccount.cpp
 *
 *  Created on: 02.05.2017
 *      Author: Danny
 */

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount():Account() {
	setTax(1.50);
	// TODO Auto-generated constructor stub

}

CheckingAccount::~CheckingAccount() {
	// TODO Auto-generated destructor stub
}

double CheckingAccount::getTax() const {
	return tax;
}

void CheckingAccount::setTax(double tax) {
	this->tax = tax;
}

void CheckingAccount::credit(double amount) {
	Account::credit(amount);
	double newBalance = 0;
	newBalance = getBalance() - tax;
	setBalance(newBalance);
}

CheckingAccount::CheckingAccount(double balance, double tax):Account(balance) {
	setTax(tax);
}

void CheckingAccount::debit(double money) {
	Account::debit(money);
	 double newBalance = 0;
	newBalance = getBalance() - tax;
	setBalance(newBalance);
}
