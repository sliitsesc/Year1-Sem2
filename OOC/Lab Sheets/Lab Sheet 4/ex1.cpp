// Demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Circle 
{
	float radius;
};

struct Rectangle
{
	float length;
	float width;
};

struct Square
{
	float length;
};

float circleArea(float radius);
float rectangleArea(float length, float width);
float squareArea(float length);

int main()
{
	float grassArea;

	grassArea = rectangleArea(28, 15) - (circleArea(5) + squareArea(4) + rectangleArea(3,7));

	cout << "Grass Area : " << grassArea;

    return 0;
}

float circleArea(float radius) {
	return radius * radius * (22 / 7);
}

float rectangleArea(float length, float width) {
	return length * width;
}

float squareArea(float length) {
	return length * length;
}
