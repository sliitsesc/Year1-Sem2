#include "stdafx.h"
#include "Student.h"
#include <iostream>
using namespace std;


Student::Student(){
	studentID = 0;
	studentName = "";
	marksOOC = 0;
	marksSPM = 0;
	marksISDM = 0;
}

void Student::setStudentDetails(int id, string name) {
	this->studentID = id;
	this->studentName = name;
}

void Student::setMarksOOC(int marks) {
	marksOOC = marks;
}

int Student::getMarksOOC() {
	return marksOOC;
}

void Student::setMarksSPM(int marks) {
	marksSPM = marks;
}

int Student::getMarksSPM() {
	return marksSPM;
}

void Student::setMarksISDM(int marks) {
	marksISDM = marks;
}

int Student::getMarksISDM() {
	return marksISDM;
}

Student::~Student(){
}
