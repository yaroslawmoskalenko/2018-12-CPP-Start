

#include "pch.h"
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main(int argc, char* argv[])
{
	float a, y, x;
	cout << "Enter x="; cin >> x;

		if (x >= 0) {
			cout << "Enter a="; cin >> a;
			if (a*a*a - 1 != 0) {
				y = (sqrt(x) + a) / (a*a*a - 1);
				cout << "y=" << y << endl;
			} else {
				cout << "Wrong input a" << endl; 
			}
		} else {
			cout << "Wrong input x" << endl; 
		}
	system("pause"); 
	

}


