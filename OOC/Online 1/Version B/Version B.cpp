//Version B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Inventory{
private:
	int productId;
	int stockBalance;
public:
	Inventory(int ID, int stock);
	void purchase(int qty);
	void sale(int qty);
	void print();

};
Inventory::Inventory(int ID, int stock) {

	productId = ID;
	stockBalance = stock;
}
void Inventory::purchase(int qty) {

	stockBalance += qty;
}
void Inventory::sale(int qty) {
	if (stockBalance >= qty)
		stockBalance -= qty;
	else
		cout << "Insufficient Stock Balance" << endl;
}
void Inventory::print() {

	cout << "Product ID : " << productId << endl;
	cout << "Stock Balance : " << stockBalance << endl;
}


int main()
{
	Inventory product1(10223, 2000);

	product1.purchase(200);
	product1.sale(150);
	product1.print();
	system("pause");
    return 0;
}

