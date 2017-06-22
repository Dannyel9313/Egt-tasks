/*
 * SavingsAccount.cpp
 *
 *  Created on: 02.05.2017
 *      Author: Danny
 */

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double balance, double interestPercent):Account(balance) {
	setInterestPercent(interestPercent);
}

SavingsAccount::SavingsAccount():Account() {
	setInterestPercent(0.0);
	// TODO Auto-generated constructor stub

}

SavingsAccount::~SavingsAccount() {
	// TODO Auto-generated destructor stub
}

double SavingsAccount::getInterestPercent() const {
	return interestPercent;
}

void SavingsAccount::setInterestPercent(double interestPercent) {
	this->interestPercent = interestPercent;
}

double SavingsAccount::calcInterestRate() {
	return getBalance() * getInterestPercent();
}
