// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "employee.h"
using namespace std;



int main()
{
	Employee e1, e2;

	e1.setEMployeeDetails(1111, "Nimal");
	e1.setOTHours(22);
	e1.setOTRate(100);

	e2.setEMployeeDetails(2222,"Sunil");
	e2.setOTHours(18);
	e2.setOTRate(200);

	e1.displayEmployeeDetails();
	e2.displayEmployeeDetails();
	system("pause");
    return 0;
}

