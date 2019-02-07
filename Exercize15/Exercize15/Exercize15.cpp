// Exercize15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int Date(int D, int M, int Y)
{
	int a, y, m, R;
	a = (14 - M) / 12;
	y = Y - a;
	m = M + 12 * a - 2;
	R = 7000 + D + y + y / 4 - y / 100 + y / 400 + 31 * m / 12;
	return R % 7;
}
int main()
{
	int D, M, Y;
	cout << "D="; cin >> D;
	cout << "M="; cin >> M;
	cout << "Y="; cin >> Y;
	string S[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	cout << S[Date(D, M, Y)] << endl;
	system("pause");
	return 0;
}

