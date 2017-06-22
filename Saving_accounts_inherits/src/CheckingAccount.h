/*
 * CheckingAccount.h
 *
 *  Created on: 02.05.2017
 *      Author: Danny
 */

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include "Account.h"

class CheckingAccount: public Account {
public:
	CheckingAccount();
	CheckingAccount(double balance,double tax);
	virtual ~CheckingAccount();
	double getTax() const;
	void setTax(double tax);

	virtual void credit(double amount);
	virtual	void debit(double money);

private:

	double tax;
};

#endif /* CHECKINGACCOUNT_H_ */
