
#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main(int argc, char* argv[])
{
	float x, y;
	cout << "How much your book is costing ="; cin >> x;
	cout << "Your costs ="; cin >> y;
	float t = y - x;
	if (x == y)
		cout << "Thanks for buying our book!" << endl;
	else if (t < 0)
		cout << "There's not anough, please pay more" << endl;
	else if (t > 0)
		cout << "There's your rest:" << t << endl;

		

}

