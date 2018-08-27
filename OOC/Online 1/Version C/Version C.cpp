//Version C.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

class Invoice {
private:
	int partNumber;
	int quantity;
	float pricePerItem;
	float discount;
public:
	Invoice(int partNo, int qty, float price);
	void calcDiscount(float percentage);
	float calcFinalAmount();
	void print();

};
Invoice::Invoice(int partNo, int qty, float price) {
	partNumber = partNo;
	quantity = qty;
	pricePerItem = price;
}
void Invoice::calcDiscount(float percentage){
	int tot = quantity * pricePerItem;
	if (tot > 1000.00)
		discount = tot * (percentage / 100.00);
	else
		discount = 0.00;
}
float Invoice::calcFinalAmount() {
	return (quantity * pricePerItem) - discount;
}
void Invoice::print() {
	cout << "Part Number: " << partNumber << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Price per item:" << pricePerItem << endl;
	cout <<setprecision(2)<<setiosflags(ios::fixed)<< "Discount" << discount << endl;
	cout <<setprecision(2)<<setiosflags(ios::fixed)<< "Final Amount" << calcFinalAmount() << endl;

}

int main()
{
	Invoice invoice1(1123, 10, 150.00);
	invoice1.calcDiscount(10);
	invoice1.print();
	system("pause");
    return 0;
}

