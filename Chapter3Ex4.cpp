// Name: Logen Wolfe
// Date: 9/28/2026
// Program: Chapter 3 Exercise 4
// Description: Write a program that asks the user to enter their monthly costs for each of the following house-related expenses:
// Rent or Mortgage Payment
// Phone Bills
// Internet Service
// Utilities
// Cable
// Then, display the total monthly and yearly costs for these expenses.

#include <iostream>
#include <iomanip>
using namespace std;
int main()


{
	double rent;
	double phones;
	double wifi;
	double util;
	double cable;
	double monthlyTotal;
	double yearlyTotal;

	cout << "Welcome to Logen's Good ol' Expense Calculator!" << endl;
	cout << "Please enter your costs for the following expenses:" << endl;
	cout << "Rent/Mortgage: $" << endl;
	cin >> rent; 
	cout << "Phone Bill: $" << endl;
	cin >> phones;
	cout << "Wifi: $" << endl;
	cin >> wifi;
	cout << "Miscellaneous Utilities: $" << endl;
	cin >> util;
	cout << "Cable: $" << endl;
	cin >> cable;

	monthlyTotal = rent + phones + wifi + util + cable;
	yearlyTotal = monthlyTotal * 12;
	cout << "Looks like your total monthly expenses are about.. $" << monthlyTotal << "! Geez, the economy nowadays.." << endl;
	cout << "And your total yearly expenses are.. $" << yearlyTotal << "! Holy CRAP, Expenses add up.." << endl;

	return 0;
}








