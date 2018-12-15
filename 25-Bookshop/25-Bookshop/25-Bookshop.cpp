// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "pch.h"
//#include <stdafx.h>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main(int argc, char* argv[])
{
	float a, b, y;
	cout << "Your money a=";
	cin >> a;
	cout << "Book cost b=";
	cin >> b;
	if (a == b)
		cout << "Thank you for buying our book, come here later ;)";
	if (a > b)
	{
		y = a - b;
		cout << "Thank you for buying our book, come here later, take your rest: ";
		cout << y << endl;
	}
	if (a < b)
	{
		y = b - a;
		cout << "Please, pay more: ";
		cout << y << endl;
	}
	system("pause");
}