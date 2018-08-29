#pragma once

class Plane {
private:
	int planeID;
	char pilot[10];
	char destination[20];
public:
	void setPlaneDetails(int ID,char name[10],char des[20]);
	void displayPlaneDetails();
	void setPilot(char name[10]);
	
};