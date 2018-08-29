// Question3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"Plane.h"
using namespace std;


int main()
{
	Plane p1, p2, p3, p4;
	char name[10];

	p1.setPlaneDetails(1, "John", "USA");
	p2.setPlaneDetails(2, "George", "UK");
	p3.setPlaneDetails(3, "Henry", "USA");
	p4.setPlaneDetails(4, "Ryan", "UAE");

	cout << "Enter new pilot for plane1:";
	cin >> name;
	p1.setPilot(name);

	cout << "Enter new pilot for plane2:";
	cin >> name;
	p2.setPilot(name);

	cout << "Enter new pilot for plane3:";
	cin >> name;
	p3.setPilot(name);

	cout << "Enter new pilot for plane4:";
	cin >> name;
	p4.setPilot(name);

	p1.displayPlaneDetails();
	p2.displayPlaneDetails();
	p3.displayPlaneDetails();
	p4.displayPlaneDetails();

	system("pause");
    return 0;
}

