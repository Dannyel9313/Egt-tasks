/*
 * Operations.cpp
 *
 *  Created on: 26.05.2017
 *      Author: Danny
 */

#include "Operations.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iterator>
using namespace std;

Operations::Operations() {
	// TODO Auto-generated constructor stub

}

Operations::~Operations() {
	// TODO Auto-generated destructor stub
}

void Operations::ReadingFromFile() {

	pugi::xml_document doc;

	if (!doc.load_file("students.xml")) {
		cerr << "The file could not be readed !" << endl;
		exit(1);
	} else {
		cout << "The file is readed !" << endl;
	}

	pugi::xml_node studentObject = doc.child("students");

	for (pugi::xml_node student = studentObject.first_child(); student;
			student = student.next_sibling()) {
		string firstName =
				student.child("students:firstName").text().as_string();
		string lastName = student.child("students:lastName").text().as_string();
		string gander = student.child("students:gender").text().as_string();
		string birthDate =
				student.child("students:birthdate").text().as_string();
		long int phone = student.child("students:phone").text().as_int();
		string email = student.child("students:email").text().as_string();
		int course = student.child("students:course").text().as_int();
		string specialty =
				student.child("students:specialty").text().as_string();
		long int facultyNumber =
				student.child("students:facultyNumber").text().as_int();

		Student *newStudent = new Student(firstName, lastName, gander,
				birthDate, phone, email, course, specialty, facultyNumber);

		m_sStudent.push_back(newStudent);

		for (pugi::xml_node exam =
				student.child("exams:examList").first_child(); exam;
				exam = exam.next_sibling()) {
			string name = exam.child("exams:name").text().as_string();
			string profesorer = exam.child("exams:lecturer").text().as_string();
			int grade = exam.child("exams:grade").text().as_int();

			Exam *newExam = new Exam(name, profesorer, grade);

			for (unsigned int i = 0; i < m_sStudent.size(); i++) {
				m_sStudent[i]->addExam(*newExam);
			}
		}

	}

}

void Operations::PrintStudentsByVector() {

	for (unsigned int i = 0; i < m_sStudent.size(); i++) {
		m_sStudent[i]->printInfo();
		cout << endl;
		cout << "//////////";
	}
}

void Operations::ReadingFromFileAndPushInMap() {

	pugi::xml_document doc;

	if (!doc.load_file("students.xml")) {
		cerr << "The file could not be readed !" << endl;
		exit(1);
	} else {
		cout << "The file is readed !" << endl;
	}

	pugi::xml_node studentObject = doc.child("students");

	for (pugi::xml_node student = studentObject.first_child(); student;
			student = student.next_sibling()) {
		string firstName =
				student.child("students:firstName").text().as_string();
		string lastName = student.child("students:lastName").text().as_string();
		string gander = student.child("students:gender").text().as_string();
		string birthDate =
				student.child("students:birthdate").text().as_string();
		long int phone = student.child("students:phone").text().as_int();
		string email = student.child("students:email").text().as_string();
		int course = student.child("students:course").text().as_int();
		string specialty =
				student.child("students:specialty").text().as_string();
		long int facultyNumber =
				student.child("students:facultyNumber").text().as_int();

		Student *newStudent = new Student(firstName, lastName, gander,
				birthDate, phone, email, course, specialty, facultyNumber);

		for (pugi::xml_node exam =
				student.child("exams:examList").first_child(); exam;
				exam = exam.next_sibling()) {
			string name = exam.child("exams:name").text().as_string();
			string profesorer = exam.child("exams:lecturer").text().as_string();
			int grade = exam.child("exams:grade").text().as_int();

			Exam *newExam = new Exam(name, profesorer, grade);

			newStudent->addExam(*newExam);

		}
		mapStudents[facultyNumber] = newStudent;
	}

}

void Operations::PrintSudentsByMap() {
	map<long int, Student*>::iterator it;

	for (it = mapStudents.begin(); it != mapStudents.end(); it++) {
		cout << "Student with Faculty number : " << it->first << endl;
		it->second->printInfo();

	}

}

void Operations::printAverageStudentsGrade() {
	map<long int, Student*>::iterator it;

	for (it = mapStudents.begin(); it != mapStudents.end(); it++) {
		cout << "Average grade of student with Faculty number : " << it->first
				<< endl;
		cout << it->second->CalculateAverageGrade();
		cout << endl;

	}
}

void Operations::deleteLowGradesStudent() {
	map<long int, Student*>::iterator it;
//double deleted = 0;
	vector<double> toDelete;
	for (it = mapStudents.begin(); it != mapStudents.end(); it++)
	{
		if (it->second->CalculateAverageGrade() < 4) {
//			deleted = it->first;
		toDelete.push_back(it->first);
		}

	}
	for(unsigned int i = 0; i < toDelete.size();i++)
	{
		mapStudents.erase(mapStudents.find(toDelete[i]));
	}

//	mapStudents.erase(mapStudents.find(deleted));
}

void Operations::CreateNewBinaryFile(const char* fileName)
{

	ofstream outOfBinaryFile(fileName, ios::out | ios::binary);

	if(!outOfBinaryFile)
	{
		cerr << "The file could not be created !" << endl;
		exit(1);
	}else
	{
		cout << "The file is created !" << endl;
	}

	Student student;


	for(int i = 0; i < 10; i++)
	{
	outOfBinaryFile.write(reinterpret_cast<char*>(&student),sizeof(Student));

	}


}

//void Operations::SortAndWriteExellentDegreeInFile()
//{
//	map<long int , Student*>::iterator it;
//
//	for(it = mapStudents.begin(); it != mapStudents.end(); it++)
//	{
//		if(it->second->CalculateAverageGrade() > 5){
//
//			ofstream outExellent("ExellentStudents.dat", ios::out | ios::binary);
//
//			if(!outExellent){
//				cerr << "The file could not be read !" << endl;
//				exit(1);
//			}
//
//			Student ExellentStudent;
//
//			ExellentStudent.setFirstName(it->second->getFirstName());
//			ExellentStudent.setLastName(it->second->getLastName());
//			ExellentStudent.setGander(it->second->getGander());
//			ExellentStudent.setBirthDate(it->second->getBirthDate());
//			ExellentStudent.setPhone(it->second->getPhone());
//			ExellentStudent.setEmail(it->second->getEmail());
//			ExellentStudent.setCourse(it->second->getCourse());
//			ExellentStudent.setSpecialty(it->second->getSpecialty());
//			ExellentStudent.setFacultyNumber(it->second->getFacultyNumber());
//		for(int i = 0; i < it->second->exams.size();i++)
//		{
//			ExellentStudent.addExam(*it->second->exams[i]);
//		}
//
//
//
//		}
//	}
//
//
//}
