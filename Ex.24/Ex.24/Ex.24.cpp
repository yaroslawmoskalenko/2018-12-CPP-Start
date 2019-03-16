
#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(int argc, char* argv[])
{
	float a, b;
	cout << "Enter the birth year = "; cin >> a;
	cout << "Enter the year of today = "; cin >> b;
	float y = a - b;
	if (y <= 6)
		cout << "Child" << y << endl;
	if (y > 6 && y < 18)
		cout << "Teenager" << y << endl;
	if (y >= 18 && y < 60)
		cout << "Working man" << y << endl;
	if (y >= 60)
		cout << "Old man" << y << endl;
}
