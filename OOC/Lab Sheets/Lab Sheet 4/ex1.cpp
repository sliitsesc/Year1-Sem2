// Demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Circle
{
	float radius;
}circle;

struct Rectangle
{
	float length;
	float width;
}rectangleLarge, rectangleSmall;

struct Square
{
	float length;
}square;

float circleArea(float radius);
float rectangleArea(float length, float width);
float squareArea(float length);
float calPerimeter(float length, float width);
float fenceBuildingCost(float perimeter, float costPerUnit);

int main()
{
	float grassArea, costPerUnit;

	cout << "Input radius for circle : ";
	cin >> circle.radius;

	cout << "Input length for recatangle : ";
	cin >> rectangleLarge.length;

	cout << "Input width for recatangle : ";
	cin >> rectangleLarge.width;

	cout << "Input length for recatangle : ";
	cin >> rectangleSmall.length;

	cout << "Input width for recatangle : ";
	cin >> rectangleSmall.width;

	cout << "Input length for square : ";
	cin >> square.length;

	grassArea = rectangleArea(rectangleLarge.length, rectangleLarge.width) - (circleArea(circle.radius) + squareArea(square.length) + rectangleArea(rectangleSmall.length, rectangleSmall.width));

	cout << "Grass Area : " << grassArea;

	cout << "Input Fence Cost per Unit";
	cin >> costPerUnit;

	cout << "Cost of building a fence : " 
		<< fenceBuildingCost(calPerimeter(rectangleLarge.length, rectangleLarge.width), costPerUnit);
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

float calPerimeter(float length, float width) {
	return 2 * (length + width);
}

float fenceBuildingCost(float perimeter, float costPerUnit) {
	return perimeter * costPerUnit;
}
