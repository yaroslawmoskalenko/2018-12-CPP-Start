
#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
	// [AB], Точка  C, лежит ли на прямой отрезка, лежит ли в отрезке
	// A(x1,y1); B(x2,y2); C(x,y)
	float x1, y1, x2, y2, x, y;
	cout << "Input A x1="; cin >> x1; 
	cout << "Input A y1="; cin >> y1;
	cout << "Input B x2="; cin >> x2;
	cout << "Input B y2="; cin >> y2;
	cout << "Input C x="; cin >> x;
	cout << "Input C y="; cin >> y;

	float xAB = x2 - x1;
	float yAB = y2 - y1;
	float kAB = yAB / xAB;

	float xCA = x1 - x;
	float yCA = y1 - y;
	float kCA = xCA / yCA;

	bool isOnLine = (abs(kAB) == abs(kCA)); // сравнение модулей прямых
	if (isOnLine)
		cout << "Point is on the line" << endl;
	else
		cout << "Point is out of the line" << endl;
	
	if (isOnLine && x1 <= x && x <= x2)
		cout << "Point is on the section " << endl;
	system("pause");
}
	