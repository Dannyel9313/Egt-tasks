/*
 * Triangle.h
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
using namespace std;
class Triangle {

	friend istream& operator>>(istream&, Triangle&);
	friend ostream& operator<<(ostream&,const Triangle&);



public:
	Triangle();
	Triangle(int a,int b, int c, int h);
	virtual ~Triangle();
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	int getC() const;
	void setC(int c);
	int getH() const;
	void setH(int h);

	bool operator==(Triangle&);
	bool operator!=(Triangle&);

private:
	int a;
	int b;
	int c;
	int h;

};

#endif /* TRIANGLE_H_ */
