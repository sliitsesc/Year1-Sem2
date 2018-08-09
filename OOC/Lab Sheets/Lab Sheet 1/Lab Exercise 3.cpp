// Lab Exercise 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num;
	printf("Enter Number:");
	scanf_s("%d", &num);

	for (int i = 1; i <= 12; i++)
	{
		printf("%d X %d = %d\n", num, i, (num*i));
	}
	system("pause");

    return 0;
}

