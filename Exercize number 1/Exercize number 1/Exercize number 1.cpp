

#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
	float x1, y1, x2, y2, k1, k2;
	cout << "Input x1="; cin >> x1;
	cout << "Input y1="; cin >> y1;
	cout << "Input x2="; cin >> x2;
	cout << "Input y2="; cin >> y2;
	if ((y1 == 0 && x1 == 0) || (y2 == 0 && x1 == 0))
	{ 
		cout << "Undefined result" << endl;
	}
	else if ((x1 == 0) && (x2 != 0))
	{
		cout << "Angle AO > Angle BO" << endl;
	}
	else if ((x1 != 0) && (x2 == 0))
	{
		cout << "Angle BO > Angle AO" << endl;
	}
	else 
	{
		k1 = abs(y1 / x1); // x1!=0, y1!=0;
		k2 = abs(y2 / x2); // x2!=0, y2!=0;
		if (k1 > k2)
			cout << "Angle AO > Angle BO" << endl;
		else
			cout << "Angle BO > Angle AO" << endl;
		system("pause");
	}
}