#include "stdafx.h"
#include "Student.h"

//default constructor implementation
Student::Student()
{
}

//deconstructor
Student::~Student()
{
}

//parameterlized constructor implementation
Student::Student(int id, string name, string address, int tel)
{
	studentID = id;
	studentName = name;
	studentAddress = address;
	studentTel = tel;
}

//getters and setters implementation
void Student::setStudentID(int id)
{
	studentID = id;
}

int Student::getStudentID()
{
	return studentID;
}

void Student::setStudentName(string name)
{
	studentName = name;
}

string Student::getStudentName()
{
	return studentName;
}

void Student::setStudentAddress(string address)
{
	studentAddress = address;
}

string Student::getStudentAddress()
{
	return studentAddress;
}

void Student::setStudentTel(int tel)
{
	studentTel = tel;
}

int Student::getStudentTel()
{
	return studentTel;
}
