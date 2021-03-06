// Shiela Olson
// Assignment 1
// Source: None
// Assignment #1 - Milk Cartons

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	//user input
	cout << "Assignment #1 - Milk Cartons " << endl;
	cout << "Enter the total amount of milk produced in the morning in liters: ";
	double milkInLiters;
	cin >> milkInLiters;
		
	//number of milk cartons needed to hold milk 
	double numberOfMilkCartons = static_cast<int> (milkInLiters / 3.78) ;
	cout << "The number of milk cartons needed to hold milk is " << numberOfMilkCartons << " ." << endl;

	//cost of producing milk
	double costOfProducingMilk = milkInLiters * 0.38;
	cout << "The cost of producing milk is $" << costOfProducingMilk << " ." << endl;

	//profit for producing milk
	double profitForProducingMilk = numberOfMilkCartons * 0.27;
	cout << "The profit for producing milk for this morning is $" << profitForProducingMilk << " ." << endl;


	printf("Any key to continue....\n");
	_getch();
	return 0;
}

