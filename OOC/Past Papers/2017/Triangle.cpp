#include "stdafx.h"
#include "Triangle.h"


Triangle::Triangle(double pHeight, double pBase)
{
	height = pHeight;
	base = pBase;
}

double Triangle::area()
{
	return (height * base) / 2.0;
}

Triangle::~Triangle()
{
}
