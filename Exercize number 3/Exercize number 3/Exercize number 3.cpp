//Визначити чи перетинає пряма ax + b = y відрізок, заданий точкам(x1, y1), (x2, y2)
//Тестовые данные: x1=5; y1=2; x2=1; y2=4; a=0.5; b=1 - пересекается;
//Тестовые данные: x1=1; y1=4; x2=4; y2=3; a=1; b=-2 - не пересекается;
#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
	float x1, y1, x2, y2, a2, b2;
	cout << "Input x1="; cin >> x1;
	cout << "Input y1="; cin >> y1;
	cout << "Input x2="; cin >> x2;
	cout << "Input y2="; cin >> y2;
	cout << "Input a2="; cin >> a2;
	cout << "Input b2="; cin >> b2;
	//Уравнение прямой, проходящей через две заданные точки на плоскости:
	//  x - x1 / x2 - x1 = y - y1 / y2 - y1
	//
	//  a1 = (y2 - y1) / (x2 - x1);
	//  b1 = (y1 - (y2 - y1) / (x2 - x1) * x1);  
	//
	// /(a1 * x + b1 - y = 0
	// |
	// <
	// |
	// \(a2 * x + b2 - y = 0
	// x = (b2 - b1) / (a1 - a2);
	// y = a1 * ((b2 - b1) / (a1 - a2)) + b1; 
	float a1 = (y2 - y1) / (x2 - x1);
	cout << "a1=" << a1 << endl;
	float b1 = (y1 - (y2 - y1) / (x2 - x1) * x1);
	cout << "b1=" << b1 << endl;
	float x = (b2 - b1) / (a1 - a2);
	cout << "x=" << x << endl;
	float y = a1 * ((b2 - b1) / (a1 - a2)) + b1;
	cout << "y=" << y << endl;
	if (x1 < x && x < x2 || x2 < x && x < x1)
		cout << "Segment and straight line is intersected" << endl;
	else
		cout << "Not intersected" << endl;

	system("pause");
}