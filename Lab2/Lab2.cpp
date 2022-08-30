// CGT 215
// Lab 2
// Gabby Willard

#include <iostream>
using namespace std;
int main()
{
	// Variables
	float A;
	float B;
	float X;
	// Input & Output Prompts for A
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "A=" << A << endl;
	// Input & Output Prompts for B
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "B=" << B << endl;
	// Solving for X
	cout << "Solving " << A << "x+" << B << "=0" << endl;
	X = -B/A;
	cout << "X=" << X << endl;
}

