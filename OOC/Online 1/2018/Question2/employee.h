#pragma once
class Employee {
private:
	int employeeID;
	char employeeName[20];
	int OTHours;
	float OTRate;
public:
	void setEMployeeDetails(int employeeID, char name[20]);
	void setOTHours(int hours);
	void setOTRate(float rate);
	float calculateOTPayment();
	void displayEmployeeDetails();

};