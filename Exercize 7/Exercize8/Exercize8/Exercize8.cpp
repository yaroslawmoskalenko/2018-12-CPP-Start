//Визначити відносне положення двох кіл, заданих координатами центрів та радіусами.
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	float x1, y1, r1, x2, y2, r2;
	cout << "Input x1="; cin >> x1;
	cout << "Input y1="; cin >> y1;
	cout << "Input r1="; cin >> r1;
	cout << "Input x2="; cin >> x2;
	cout << "Input y2="; cin >> y2;
	cout << "Input r2="; cin >> r2;
	float s;
	s = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	cout << "s=" << s << endl;
	if (s < r1 || s < r2) {
		if (abs(r1 - r2) == s)
			cout << "The circles, that inside of each other, have one point of intersect" << endl;
		else if (abs(r1 - r2) > s)	
			cout << "The circles are inside of each other" << endl;
		else if (abs(r1 - r2) < s)
			cout << "The circles have two points of intersection" << endl;
	} else {	
		if (r1 + r2 < s)
			cout << "The circles do not intersect" << endl;
		else if (r1 + r2 == s)		
			cout << "The circles have one point of intersection" << endl;
		else if (r1 + r2 > s)
			cout << "The circles have two points of intersection" << endl;
	}
}

