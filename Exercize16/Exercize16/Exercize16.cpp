
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, Y;
	int MounthsDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int StartDayOfMonths[12];
	string MonthsNames[12] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };
	string dayOfWeek[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	cout << "Y="; cin >> Y;
	cout << "n="; cin >> n;
	bool isLeapYear = (Y % 400 == 0) && (Y % 4 == 0) && (Y % 100 != 0);
	int startday = 1;
	for (int i = 0; i < 12; i++) {
		StartDayOfMonths[i] = startday;
		startday = startday + MounthsDays[i];
		if (isLeapYear && i == 1)
			startday++;
		//cout << StartDayOfMonths[i] << endl;
	}
	int i;
	for (i = 0; i < 12; i++) {
		if (StartDayOfMonths[i] > n)
			break;
	}
	i--;
	//cout << "i=" << i << endl;
	cout << dayOfWeek[n % 7] << endl;
	cout << MonthsNames[i] << endl;

}