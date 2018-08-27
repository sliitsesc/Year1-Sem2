// version A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;


class Account {
private:	
	int accNum;
	float accbalance;
public:
	Account(int accNo, float balance);
	void credit(float amount);
	void debit(float amount);
	void print();
};

void Account::credit(float amount) {

	accbalance += amount;
}
void Account::debit(float amount) {
	if (accbalance >= amount)
		accbalance -= amount;
	else
		cout << "Insuffient Balance" << endl;
}
Account::Account(int accNo,float balance) {
	
	accNum = accNo;
	accbalance = balance;
	
}
void Account::print(){
	cout << "Account Number: " << accNum<<endl;
	cout <<setprecision(2)<<setiosflags(ios::fixed)<< "Account Balance: " << accbalance << endl;

}


int main()
{
	Account account1(82535800,3000);
	account1.credit(2000);
	account1.debit(7000);
	account1.print();
	system("pause");
    return 0;
}

