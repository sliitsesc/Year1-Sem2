#pragma once
class RectangleX{
private:
	double length;
	double width;
public:
	RectangleX();
	void setLength(double length);
	void setWidth(double width);
	double getLength();
	double getWidth();
	double calcArea();
	~RectangleX();
};

