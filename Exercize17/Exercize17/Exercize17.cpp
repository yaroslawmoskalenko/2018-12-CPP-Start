

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	float x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "x1="; cin >> x1;
	cout << "y1="; cin >> y1;
	cout << "x2="; cin >> x2;
	cout << "y2="; cin >> y2;
	cout << "x3="; cin >> x3;
	cout << "y3="; cin >> y3;
	cout << "x4="; cin >> x4;
	cout << "y4="; cin >> y4;

	float xa, ya, xb, yb, al, bl;
	xa = x2 - x1;
	ya = y2 - y1;
	xb = x4 - x3;
	yb = y4 - y3;
	al = sqrt(xa * xa + ya * ya);
	bl = sqrt(xb * xb + yb * yb);

	if (xa * xb + ya * yb == 0)
		cout << "Vectors are perpendicular" << endl;
	if (xa / xb == ya / yb)
		cout << "Vectors are collinear" << endl;
	if (xa / xb == ya / yb && al == bl)
		cout << "Vectors are equal" << endl;


}

