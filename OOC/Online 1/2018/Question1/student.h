#pragma once
class Student {
private:
	int studentID;
	char studentName[20];
	int marksOOC;
	int marksISDM;
	int marksSPM;
public:
	void setStudentDetails(int ID,char name[20]);
	void setMarksOOC(int mark);
	int getMarksOOC();
	void setMarksISDM(int mark);
	int getMarksISDM();
	void setMarksSPM(int mark);
	int getMarksSPM();
};