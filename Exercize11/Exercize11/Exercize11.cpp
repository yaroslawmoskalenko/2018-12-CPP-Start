
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265
bool isOb = false;
bool isRi = false;
bool isOx = false;
using namespace std; 
float datan(float tan) {
	return atan(tan) * 180.0 / PI; 
}
int main(int argc, char* argv[])
{
	float x1, x2, x3, y1, y2, y3;
	cout << "Input x1="; cin >> x1;
	cout << "Input y1="; cin >> y1;
	cout << "Input x2="; cin >> x2;
	cout << "Input y2="; cin >> y2;
	cout << "Input x3="; cin >> x3;
	cout << "Input y3="; cin >> y3;

	float A1s = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	float A2s = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
	float A3s = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	 
	float K1 = (y2 - y1) / (x2 - x1);
	float K2 = (y3 - y2) / (x3 - x2);
	float K3 = (y1 - y3) / (x1 - x3);
	float tgA1, tgA2, tgA3;
	tgA1 = (K1 - K3) / (1 + K1 * K3);
	tgA2 = (K2 - K1) / (1 + K2 * K1);
	tgA3 = (K2 - K3) / (1 + K2 * K3);
	cout << "tgA1=" << tgA1 << endl;
	cout << "tgA2=" << tgA2 << endl;
	cout << "tgA3=" << tgA3 << endl;
	float A1 = abs(datan(tgA1));
	float A2 = abs(datan(tgA2));
	float A3 = abs(datan(tgA3));
	
	if (A1s*A1s > A2s*A2s + A3s*A3s) {
		A1 = 180.0 - A1;
		isOb = true;
	}
	if (abs(A1s*A1s - A2s*A2s + A3s*A3s) < 0.01) {
		isRi = true;
	}

	if (A2s*A2s > A1s*A1s + A3s*A3s) {
		A2 = 180.0 - A2;
		isOb = true;
	}
	if (abs(A2s*A2s - A1s*A1s + A3s*A3s) < 0.01) {
		isRi = true;
	}

	if (A3s*A3s > A2s*A2s + A1s * A1s) {
		A3 = 180.0 - A3;
		isOb = true; 
	}
	if (abs(A3s*A3s - A2s*A2s + A1s*A1s) < 0.01) {
		isRi = true;
	}
	
	if(!isOb && !isRi) 
		isOx = true;

	if (isRi) {
		isOx = false;
		isOb = false;
	}
		
	cout << "A1=" << A1 << endl;
	cout << "A2=" << A2 << endl;
	cout << "A3=" << A3 << endl;
	
	if (isOx) 
		cout << "Oxygon" << endl;
	if (isOb)
		cout << "Obtuse triangle" << endl;
	if (isRi)
		cout << "Right triangle" << endl;
}
