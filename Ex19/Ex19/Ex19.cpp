
#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main(int argc, char* argv[])
{ 
	int n, Y;
	int MounthsDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout << "Y="; cin >> Y;
	cout << "n="; cin >> n;
	if (n < 1 || n > 12 || Y > 9999)
		cout << "incorrect n or Y!";
	bool isLeapYear = (Y % 400 == 0) && (Y % 4 == 0) && (Y % 100 != 0);
	/*if (n = 1)
		cout << "Days=" << MounthsDays[0] << endl;*/
	if (isLeapYear)
		MounthsDays[1] = 29;
	if (n = 1) 
		cout << "Days=" << MounthsDays[0] << endl;

	 
}

