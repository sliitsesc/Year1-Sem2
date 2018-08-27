#include "stdafx.h"
#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	//variable declaration
	double total, average;

	//Object declaration
	Student student;
	
	student.setStudentDetails(001,"chamod");
	student.setMarksOOC(85);
	student.setMarksSPM(90);
	student.setMarksISDM(75);

	//calculate total
	total = student.getMarksOOC + student.getMarksSPM + student.getMarksISDM;

	//calculate average
	average = total / 3.0;

	//outputs
	cout << "Total : " << total << endl;
	cout << "Average : " << average << endl;

	system("pause");
	return 0;
}