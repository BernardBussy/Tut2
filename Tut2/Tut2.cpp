// Tut2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Fraction.h"
using namespace std;
int dog();
Fraction InputFraction();

int main()
{
	Fraction A, B, result;
	cout << "For Fraction A" << endl;
	A = InputFraction();
	cout << "For Fraction B" << endl;
	B = InputFraction();
	
	cout << "A-B" << endl;
	result = A - B;
	result.Print();

	cout << "A+B" << endl;
	result = A + B;
	result.Print();

	cout << "A*B" << endl;
	result = A*B;
	result.Print();

	cout << "A/B" << endl;
	result = A/B;
	result.Print();
}

Fraction InputFraction()
{
	int temp;
	Fraction tempF;
	cout << "Enter Numerator of Fraction:" << endl;
	cin >> temp;
	tempF.SetNumerator(temp);
	EnterDenominator:
	cout << "Enter Denominator of Fraction:" << endl;
	cin >> temp;
	if (temp == 0)
	{
		cout << "You cannot have a denominator as Zero!" << endl;
		goto EnterDenominator;
	}
	tempF.SetDenominator(temp);

	return tempF;
}
