/*
 * SavingsAccount.h
 *
 *  Created on: 02.05.2017
 *      Author: Danny
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include "Account.h"

class SavingsAccount: public Account {
public:
	SavingsAccount();
	SavingsAccount(double balance,double interestPercent);
	virtual ~SavingsAccount();
	double getInterestPercent() const;
	void setInterestPercent(double interestPercent);

	double calcInterestRate();

private:
	double interestPercent;

};

#endif /* SAVINGSACCOUNT_H_ */
