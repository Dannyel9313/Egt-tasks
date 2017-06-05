/*
 * Student.h
 *
 *  Created on: 26.05.2017
 *      Author: Danny
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include "Exam.h"
#include <string>
#include <vector>
using namespace std;

class Student {
public:
	Student();
	Student(string firstName,	string lastName,	string gander,
			string birthDate,	long int phone,	string email,
			int course, string specialty, long int facultyNumber);
	virtual ~Student();
	const string& getBirthDate() const;
	void setBirthDate(const string& birthDate);
	int getCourse() const;
	void setCourse(int course);
	const string& getEmail() const;
	void setEmail(const string& email);
	long int getFacultyNumber() const;
	void setFacultyNumber(long int facultyNumber);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getGander() const;
	void setGander(const string& gander);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	long int getPhone() const;
	void setPhone(long int phone);
	const string& getSpecialty() const;
	void setSpecialty(const string& specialty);

	void addExam(Exam& otherExam);
	void printInfo();
	const vector<Exam*>& getExams() const;
	void setExams(const vector<Exam*>& exams);

	double CalculateAverageGrade();

private:
	string firstName;
	string lastName;
	string gander;
	string birthDate;
	long int phone;
	string email;
	int course;
	string specialty;
	long int facultyNumber;
	vector<Exam*> exams;

};

#endif /* STUDENT_H_ */
