#include "stdafx.h"
#include <iostream>
using namespace std;
//header files
#include "ShapeArea.h"

//Implement structures for Circle, Rectangle and Square
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

//tmain function
int _tmain(int argc, _TCHAR* argv[]) {
	float grassArea, costPerUnit;
	
	//structure variables
	Circle circle;
	Rectangle rectangleLarge, rectangleSmall;
	Square square;

	//Input data
	cout << "Input radius for circle : ";
	cin >> circle.radius;

	cout << "Input Large Rectangle length : ";
	cin >> rectangleLarge.length;

	cout << "Input Large Rectangle width : ";
	cin >> rectangleLarge.width;

	cout << "Input length for recatangle : ";
	cin >> rectangleSmall.length;

	cout << "Input width for recatangle : ";
	cin >> rectangleSmall.width;

	cout << "Input length for square : ";
	cin >> square.length;

	//calculate area
	grassArea = rectangleArea(rectangleLarge.length, rectangleLarge.width) - (circleArea(circle.radius) + squareArea(square.length) + rectangleArea(rectangleSmall.length, rectangleSmall.width));

	//print results

	return 0;
}
