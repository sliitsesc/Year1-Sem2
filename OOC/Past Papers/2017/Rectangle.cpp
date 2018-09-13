#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle(double pLength, double pWidth)
{
	length = pLength;
	width = pWidth;
}

double Rectangle::area()
{
	return length * width;
}

Rectangle::~Rectangle()
{
}
