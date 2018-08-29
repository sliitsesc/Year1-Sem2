#include"stdafx.h"
#include<iostream>
#include "Book.h"
#include<cstring>
using namespace std;

void Book::setBookDetails(int ID, char name[20], char aName[20])
{
	bookID = ID;
	strcpy_s(bookName, name);
	strcpy_s(author, aName);
}

void Book::displayBookDetails()
{
	cout << "Book ID = " << bookID << endl;
	cout << "Book Name = " << bookName << endl;
	cout << "Author = " << author << endl<<endl;
}

void Book::setBookID(int ID)
{
	bookID = ID;
}
