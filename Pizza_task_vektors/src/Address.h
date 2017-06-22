/*
 * Address.h
 *
 *  Created on: 20.04.2017
 *      Author: Danny
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <string>
using namespace std;


class Address {
public:
	Address(int, string, int);
virtual ~Address();
	int getId() const;
	void setId(int id);
	int getNumber() const;
	void setNumber(int number);
	const string& getStreet() const;
	void setStreet(const string& street);

	void print();
private:
int id;
string street;
int number;



};

#endif /* ADDRESS_H_ */
