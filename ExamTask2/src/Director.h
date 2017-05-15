/*
 * Director.h
 *
 *  Created on: 10.05.2017
 *      Author: Danny
 */

#ifndef DIRECTOR_H_
#define DIRECTOR_H_
#include <string>
using namespace std;

class Director {
public:
	Director();
	Director(string name, string family, string popularity);
	virtual ~Director();
	const string& getFamily() const;
	void setFamily(const string& family);
	const string& getName() const;
	void setName(const string& name);
	const string& getPopularity() const;
	void setPopularity(const string& popularity);

	void printDirectorInfo();

private:
	string name;
	string family;
	string popularity;



};

#endif /* DIRECTOR_H_ */
