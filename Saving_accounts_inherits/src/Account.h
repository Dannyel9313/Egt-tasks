/*
 * Account.h
 *
 *  Created on: 28.04.2017
 *      Author: Danny
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
public:
	Account();
	Account(double balance);
	virtual ~Account();
	double getBalance() const;
	void setBalance(double balance);
	virtual void credit(double amount);
	virtual void debit(double money);


private:
	double balance;
};

#endif /* ACCOUNT_H_ */
