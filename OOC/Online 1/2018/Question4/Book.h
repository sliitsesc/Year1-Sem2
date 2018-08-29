#pragma once

class Book {
private:
	int bookID;
	char bookName[20];
	char author[20];
public:
	void setBookDetails(int ID,char name[20],char aName[20]);
	void displayBookDetails();
	void setBookID(int ID);
};