#include"stdafx.h"
#include<iostream>
#include "Plane.h"
#include<string>
using namespace std;

void Plane::setPlaneDetails(int ID,char name[10], char des[20])
{
	planeID = ID;
	strcpy_s(pilot, name);
	strcpy_s(destination, des);

}

void Plane::displayPlaneDetails()
{
	cout << "Plane ID = " << planeID << endl;
	cout << "Pilot = " << pilot << endl;
	cout << "Destination" << destination << endl<<endl;
}

void Plane::setPilot(char name[20])
{
	strcpy_s(pilot, name);
}
