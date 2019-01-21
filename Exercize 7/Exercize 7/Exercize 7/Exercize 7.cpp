
#include "pch.h"
#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	float x, y;
	cout << "Input x="; cin >> x;
	cout << "Input y="; cin >> y;
	if (x > 0 && y > 0)
		cout << "Point is on the 1-st quart" << endl;
	if (x < 0 && y > 0)
		cout << "Point is on the 2-nd quart" << endl;
	if (x < 0 && y < 0)
		cout << "Point is on the 3-rd quart" << endl;
	if (x > 0 && y < 0)
		cout << "Point is on the 4-th quart" << endl;
	if (x == 0 || y == 0)
		cout << "Point is on the coordinate axes" << endl;
	float r;
	cout << "Input r="; cin >> r;
	if (0 <= r && r <= abs(x) && r <= abs(y))
		cout << "The whole circle is on the quart" << endl;
	else
		cout << "Condition not met" << endl;
}

