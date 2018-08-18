#pragma once
class Circle{

private:
	double radius;

public:
	Circle();
	void setRadius(double r);
	double getRadius();
	double calcArea();
	~Circle();
};

