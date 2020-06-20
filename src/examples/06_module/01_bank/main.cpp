#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	BankAccount account(1000);

	int balance = account.get_balance();

	cout<<"Balance: "<<balance;

	int deposit;
	cout<<"Enter the deposit amount: ";
	cin>>deposit;
	

	return 0;
}