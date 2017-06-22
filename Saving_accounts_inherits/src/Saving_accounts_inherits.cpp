//============================================================================
// Name        : Saving_accounts_inherits.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"


int main() {

	Account ac1(53.76);
	Account ac2(100.05);

	 ac1.credit(3.76);
	 ac1.debit(100);
cout <<ac1.getBalance();
cout << endl;


SavingsAccount sac1(53.76,10.1);
SavingsAccount sac2(100.05,10.1);
CheckingAccount checkac1(53.76,1);
CheckingAccount checkac2(100.05,1);

cout << sac1.calcInterestRate();
checkac1.debit(10);
cout << endl;
cout << checkac1.getBalance();


	return 0;
}
