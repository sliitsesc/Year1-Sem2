// Question4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"Book.h"
using namespace std;


int main()
{

	Book b1, b2, b3;
	int id1, id2, id3;

	b1.setBookDetails(1212, "Jane Eyre", "Charlotte Bronte");
	b2.setBookDetails(1234, "Divergent", "Veronica Roth");
	b3.setBookDetails(3456, "Matilda", "Ronald Dahl");

	
	cout << "Enter new Book ID for Book1 :";
	cin >> id1;
	cout << "Enter new Book ID for Book2 :";
	cin >> id2;
	cout << "Enter new Book ID for Book3 :";
	cin >> id3;

	b1.setBookID(id1);
	b2.setBookID(id2);
	b3.setBookID(id3);

	b1.displayBookDetails();
	b2.displayBookDetails();
	b3.displayBookDetails();

	system("pause");
    return 0;
}

