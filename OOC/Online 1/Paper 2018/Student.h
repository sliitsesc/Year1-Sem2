#include <string>

#pragma once
class Student{
private:
	int studentID;
	string studentName;
	int marksOOC;
	int marksSPM;
	int marksISDM;
public:
	Student();
	void setStudentDetails(int id, string name);
	void setMarksOOC(int marks);
	int getMarksOOC();
	void setMarksSPM(int marks);
	int getMarksSPM();
	void setMarksISDM(int marks);
	int getMarksISDM();
	~Student();
};

