/*
 * Client.h
 *
 *  Created on: 20.04.2017
 *      Author: Danny
 */
#include <string>
#ifndef CLIENT_H_
#define CLIENT_H_
using namespace std;
#include <vector>
#include "Address.h"

class Client {
public:
	Client(string);

	void addAddress(Address&);

	virtual ~Client();
	const vector<Address>& getAdreses() const;
	void setAdreses(const vector<Address>& adreses);
	const string& getName() const;
	void setName(const string& name);
	void deleteAddress(int id);
void printAddress();



private:
	string name;
	vector<Address> adreses;
};

#endif /* CLIENT_H_ */
