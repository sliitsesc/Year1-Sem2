#include "stdafx.h"
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
	//student object 
	Student s(1,"Chamod","Horana",775633985);

	cout << "Name : " << s.getStudentName() << endl;

	system("pause");
	return 0;
}