// Lab Exercise 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float lengthCM, lengthIN;

	printf("Enter Length in cm :");
	scanf_s("%f", &lengthCM);

	lengthIN = lengthCM / 2.54;

	printf("%.2f cm is %.2f in\n", lengthCM, lengthIN);
	system("pause");
}

