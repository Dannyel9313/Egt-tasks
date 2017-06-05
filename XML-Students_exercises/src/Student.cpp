/*
 * Student.cpp
 *
 *  Created on: 26.05.2017
 *      Author: Danny
 */

#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
	setFirstName("");
	setLastName("");
	setGander("");
	setBirthDate("");
	setPhone(0000000000);
	setEmail("");
	setCourse(0);
	setSpecialty("");
	setFacultyNumber(000);
	// TODO Auto-generated constructor stub

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

const string& Student::getBirthDate() const {
	return birthDate;
}

void Student::setBirthDate(const string& birthDate) {
	this->birthDate = birthDate;
}

int Student::getCourse() const {
	return course;
}

void Student::setCourse(int course) {
	this->course = course;
}

const string& Student::getEmail() const {
	return email;
}

void Student::setEmail(const string& email) {
	this->email = email;
}

long int Student::getFacultyNumber() const {
	return facultyNumber;
}

void Student::setFacultyNumber(long int facultyNumber) {
	this->facultyNumber = facultyNumber;
}

const string& Student::getFirstName() const {
	return firstName;
}

void Student::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& Student::getGander() const {
	return gander;
}

void Student::setGander(const string& gander) {
	this->gander = gander;
}

const string& Student::getLastName() const {
	return lastName;
}

void Student::setLastName(const string& lastName) {
	this->lastName = lastName;
}

long int Student::getPhone() const {
	return phone;
}

void Student::setPhone(long int phone) {
	this->phone = phone;
}

const string& Student::getSpecialty() const {
	return specialty;
}

void Student::setSpecialty(const string& specialty) {
	this->specialty = specialty;
}

const vector<Exam*>& Student::getExams() const {
	return exams;
}

Student::Student(string firstName, string lastName, string gander,
		string birthDate, long int phone, string email, int course,
		string specialty, long int facultyNumber) {
	setFirstName(firstName);
	setLastName(lastName);
	setGander(gander);
	setBirthDate(birthDate);
	setPhone(phone);
	setEmail(email);
	setCourse(course);
	setSpecialty(specialty);
	setFacultyNumber(facultyNumber);
}

void Student::addExam(Exam& otherExam) {
	exams.push_back(&otherExam);
}

void Student::printInfo() {

	cout << "First name : " << getFirstName() << endl;
	cout << "Last name : " << getLastName() << endl;
	cout << "Gander : " << getGander() << endl;
	cout << "Date of birth : " << getBirthDate() << endl;
	cout << "Phone : " << getPhone() << endl;
	cout << "Email : " << getEmail() << endl;
	cout << "Course : " << getCourse() << endl;
	cout << "Specialty : " << getSpecialty() << endl;
	cout << "Faculty number : " << getFacultyNumber() << endl;
cout << "Exam lists : " << endl;
for(unsigned int i = 0; i < exams.size(); i++)
{
	exams[i]->printExamInfo();
}



}

void Student::setExams(const vector<Exam*>& exams) {
	this->exams = exams;
}

double Student::CalculateAverageGrade() {
	double dAverageGrade = 0;
	for(unsigned int i = 0; i < exams.size();i++)
	{
		dAverageGrade = dAverageGrade + exams[i]->getGrade();

	}
	return dAverageGrade / 5;
}
