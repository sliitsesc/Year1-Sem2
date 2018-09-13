#pragma once
class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle(double pLength, double pWidth);
	double area();
	~Rectangle();
};

