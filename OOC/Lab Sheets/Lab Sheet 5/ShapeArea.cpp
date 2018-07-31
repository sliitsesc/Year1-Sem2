#include "stdafx.h"
#include <iostream>
#include "ShapeArea.h"

float areaCircle(float r) {
	return (22/7.0 * r * r);
}

float areaRectangle(float l, float w) {
	return l * w;
}

float areaSquare(float l) {
	return l * l;
}