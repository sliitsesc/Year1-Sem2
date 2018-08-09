// Lab Exercise 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
int square(int x);
int cube(int x);

int main()
{
	int num;

	printf("Enter Number:");
	scanf_s("%d", &num);

	
	cube(num);

	printf("Square value is %d\n", square(num));
	printf("Cubic value is %d\n", cube(num));
	system("pause");
    return 0;
}
int square(int x)
{
	return x * x;
}

int cube(int x)
{
	return x * x * x;
}


