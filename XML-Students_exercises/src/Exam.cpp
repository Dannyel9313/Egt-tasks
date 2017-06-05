/*
 * Exam.cpp
 *
 *  Created on: 26.05.2017
 *      Author: Danny
 */

#include "Exam.h"
#include <iostream>
using namespace std;

Exam::Exam() {
	setName("");
	setProfesorer("");
	setGrade(0);
	// TODO Auto-generated constructor stub

}

Exam::~Exam() {
	// TODO Auto-generated destructor stub
}

int Exam::getGrade() const {
	return grade;
}

void Exam::setGrade(int grade) {
	this->grade = grade;
}

const string& Exam::getName() const {
	return name;
}

void Exam::setName(const string& name) {
	this->name = name;
}

const string& Exam::getProfesorer() const {
	return profesorer;
}

Exam::Exam(string name, string profesorer, int grade) {
	setName(name);
		setProfesorer(profesorer);
		setGrade(grade);
}

void Exam::setProfesorer(const string& profesorer) {
	this->profesorer = profesorer;
}

void Exam::printExamInfo() {
	cout << "Name : " << getName() << endl;
	cout << "Profesorer : " <<getProfesorer() << endl;
	cout << "Grade : " << getGrade() << endl;
}
