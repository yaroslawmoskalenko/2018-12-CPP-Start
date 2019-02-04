

#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
	float x1, x2, x3, x4, y1, y2, y3, y4, m1, m2, m3, m4;

	cout << "Input x1="; cin >> x1;
	cout << "Input y1="; cin >> y1;
	cout << "Input m1="; cin >> m1;
	cout << "Input x2="; cin >> x2;
	cout << "Input y2="; cin >> y2;
	cout << "Input m2="; cin >> m2;
	cout << "Input x3="; cin >> x3;
	cout << "Input y3="; cin >> y3;
	cout << "Input m3="; cin >> m3;
	cout << "Input x4="; cin >> x4;
	cout << "Inout y4="; cin >> y4;
	cout << "Input m4="; cin >> m4;
		
	float Xc = (x1 * m1 + x2 * m2 + x3 * m3 + x4 * m4) / (m1 + m2 + m3 + m4);
	float Yc = (y1 * m1 + y2 * m2 + y3 * m3 + y4 * m4) / (m1 + m2 + m3 + m4);
	cout << "Xc=" << Xc << endl;
	cout << "Yc=" << Yc << endl;
}

