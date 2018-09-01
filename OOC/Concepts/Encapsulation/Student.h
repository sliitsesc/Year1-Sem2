#include <iostream>
#include <string>

using namespace std;

#pragma once
class Student{

	//properties
private:
	int studentID;
	string studentName;
	string studentAddress;
	int studentTel;
public:
	//default Constructor declaration
	Student();
	~Student();

	//parameterlized constructor
	Student(int id, string name, string address, int tel);

	//getters and setters declaration
	void setStudentID(int id);
	int getStudentID();

	void setStudentName(string name);
	string getStudentName();

	void setStudentAddress(string address);
	string getStudentAddress();

	void setStudentTel(int tel);
	int getStudentTel();
};

