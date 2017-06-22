/*
 * ParkWorker.h
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#ifndef PARKWORKER_H_
#define PARKWORKER_H_
#include <string>
using namespace std;


class ParkWorker {
public:
	ParkWorker();
	ParkWorker(string name, string middleName,string family,long egn,
			string address, int tel,string gander);
	virtual ~ParkWorker();
	const string& getAddress() const;
	void setAddress(const string& address);
	long getEgn() const;
	void setEgn(long egn);
	const string& getFamily() const;
	void setFamily(const string& family);
	const string& getGander() const;
	void setGander(const string& gander);
	const string& getMiddleName() const;
	void setMiddleName(const string& middleName);
	const string& getName() const;
	void setName(const string& name);
	int getTel() const;
	void setTel(int tel);

	virtual void printInfo();
	virtual double calculateSalary();

private:

string name;
string middleName;
string family;
long egn;
string address;
int tel;
string gander;


};

#endif /* PARKWORKER_H_ */
