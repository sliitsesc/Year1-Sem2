
#include <stdafx.h>
#include <string>
#include "student.h"

void Student::setStudentDetails(int ID, char name[20]) {
	studentID = ID;
	strcpy_s(studentName, name);
}
void Student::setMarksISDM(int marks){
	marksISDM = marks;
}
void Student::setMarksOOC(int marks) {
	marksOOC = marks;
}
void Student::setMarksSPM(int marks) {
	marksSPM = marks;
}
int Student::getMarksISDM() {
	return marksISDM;
}
int Student::getMarksOOC() {
	return marksOOC;
}
int Student::getMarksSPM() {
	return marksSPM;
}
