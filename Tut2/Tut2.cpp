// Tut2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Fraction.h"
using namespace std;


int main()
{
	int temp;
	Fraction A, B, result;

	cout << "Enter Numerator for Fraction A!" << endl;
	cin >> temp;
	A.SetNumerator(temp);
	cout << "Enter Denominator for Fraction A!" << endl;
	cin >> temp;
	A.SetDenominator(temp);

	cout << "Enter Numerator for Fraction B!" << endl;
	cin >> temp;
	B.SetNumerator(temp);
	cout << "Enter Denominator for Fraction B!" << endl;
	cin >> temp;
	B.SetDenominator(temp);

	result = A - B;
	result.Print();
}

