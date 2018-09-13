#pragma once
class Triangle
{
private:
	double height;
	double base;
public:
	Triangle(double pHeight, double pBase);
	double area();
	~Triangle();
};

