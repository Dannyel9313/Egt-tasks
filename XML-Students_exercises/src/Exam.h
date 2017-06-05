/*
 * Exam.h
 *
 *  Created on: 26.05.2017
 *      Author: Danny
 */

#ifndef EXAM_H_
#define EXAM_H_
#include <string>
using namespace std;

class Exam {
public:
	Exam();
	Exam(string name, string profesorer, int grade);
	virtual ~Exam();
	int getGrade() const;
	void setGrade(int grade);
	const string& getName() const;
	void setName(const string& name);
	const string& getProfesorer() const;
	void setProfesorer(const string& profesorer);

	void printExamInfo();

private:

	string name;
	string profesorer;
	int grade;



};

#endif /* EXAM_H_ */
