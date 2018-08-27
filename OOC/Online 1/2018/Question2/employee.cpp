#include "stdafx.h"
#include <iostream>
#include<string>
#include "employee.h"
using namespace std;

void Employee::setEMployeeDetails(int ID, char name[20]){
	
	employeeID = ID;
	strcpy_s(employeeName, name);
}
void Employee::setOTHours(int hours) {

	OTHours = hours;
}
void Employee::setOTRate(float rate) {

	OTRate = rate;
}
float Employee::calculateOTPayment() {

	return OTHours * OTRate;
}
void Employee::displayEmployeeDetails() {

	cout << "Employee ID : " << employeeID << endl;
	cout << "Employee Name : " << employeeName << endl;
	cout << "OT Payment : " << calculateOTPayment() << endl;
}
