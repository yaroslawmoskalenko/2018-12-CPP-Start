
//Дано трикутник на площині, що заданий координатами трьох точок. Визначити чи потрапляє вказана точка у область трикутника, чи лежить на стороні трикутника або чи знаходиться за межами області трикутника.
//Исходные данные: x1=2; x2=7; x3=6; y1=2; y2=3; y3=6; x=5; x=2. - Точка не пересекает треугольник
#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(int argc, char* argv[])
{
	float x1, x2, x3, y1, y2, y3, x, y; //Координаты трех точек и заданной точки
	cout << "Input x1="; cin >> x1;
	cout << "Input x2="; cin >> x2;
	cout << "Input x3="; cin >> x3;
	cout << "Input y1="; cin >> y1;
	cout << "Input y2="; cin >> y2;
	cout << "Input y3="; cin >> y3;
	cout << "Input x="; cin >> x;
	cout << "Input y="; cin >> y;
	if (x1 < x && x < x2 && x2 < x && x < x3 || x2 < x && x < x1 && x3 < x && x < x2)
	cout << "Point is on the line of tryangle" << endl;	
	else
		cout << "Point is don't intersect lines of tryangle" << endl; 
	if (y1 < y && y < y2 && y2 < y && y < y3 || y2 < y && y < y1 && y3 < y && y < y2)
		cout << "Point is inside of the triangle" << endl;
	else
		cout << "Point is outside of the triangle" << endl;
	system("pause");
}
