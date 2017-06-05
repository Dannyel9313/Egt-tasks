/*
 * Operations.h
 *
 *  Created on: 26.05.2017
 *      Author: Danny
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include "pugixml.hpp"
#include "Student.h"
#include <map>
#include <vector>
using namespace std;

class Operations {
public:
	Operations();
	virtual ~Operations();

	void ReadingFromFile();
	void ReadingFromFileAndPushInMap();

	void PrintStudentsByVector();

	void PrintSudentsByMap();

	void printAverageStudentsGrade();

	void deleteLowGradesStudent();

	void CreateNewBinaryFile(const char*);

	void SortAndWriteExellentDegreeInFile();

private:

	vector<Student*> m_sStudent;
	map<long int, Student*> mapStudents;
};

#endif /* OPERATIONS_H_ */
