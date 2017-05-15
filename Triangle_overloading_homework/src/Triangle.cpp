/*
 * Triangle.cpp
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#include "Triangle.h"
#include <iomanip>
#include <iostream>

using namespace std;


istream& operator>>(istream& input, Triangle& triangle){

	input.ignore(1);
	input>>setw(1)>>triangle.a;
	input.ignore(1);
	input>>setw(1)>>triangle.b;
	input.ignore(1);
	input>>setw(1)>>triangle.c;
	input.ignore(1);
	input>>setw(1)>>triangle.h;

	return input;

}


ostream& operator<<(ostream& out,const Triangle& triangle){

	out<<triangle.getA() << "," << triangle.getB() << "," << triangle.getC() << "," << triangle.getH();

	return out;


}


Triangle::Triangle() {
	setA(0);
	setB(0);
	setC(0);
	setH(0);
	// TODO Auto-generated constructor stub

}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

int Triangle::getA() const {
	return a;
}

void Triangle::setA(int a) {
	this->a = a;
}

int Triangle::getB() const {
	return b;
}

void Triangle::setB(int b) {
	this->b = b;
}

int Triangle::getC() const {
	return c;
}

void Triangle::setC(int c) {
	this->c = c;
}

int Triangle::getH() const {
	return h;
}

void Triangle::setH(int h) {
	this->h = h;
}

Triangle::Triangle(int a, int b, int c, int h) {
	setA(a);
	setB(b);
	setC(c);
	setH(h);
}

bool Triangle::operator ==(Triangle& right) {

	if(this->a == right.a && this->b == right.b &&
			this->c == right.c && this->h == right.h){
		return true;
	}else
	{
	return false;
}
}
bool Triangle::operator !=(Triangle& right) {
	if(this->a != right.a || this->b != right.b || this->c != right.c ||
			this->h !=right.h){
		return true;
	}else
	{
	return false;
}
}
