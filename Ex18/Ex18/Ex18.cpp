
#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
float lenght(float x1, float y1, float x2, float y2) {
	return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

}
int main(int argc, char* argv[])
{
	float X[5];
	float Y[5];
	for (int i = 0; i < 5; i++) {
		cout << "Input x="; cin >> X[i];
		cout << "Input y="; cin >> Y[i];
	}
	float max = -1;
	float min = lenght(X[0], Y[0], X[1], Y[1]);
	for (int i = 0; i < 5; i++) {
		float L = lenght(X[i], Y[i], X[(i + 1) % 5], Y[(i + 1) % 5]);
		if (L > max)
			max = L;
		if (L < min)
			min = L;
	}
	cout << "The longest is= " << max << endl;
	cout << "The shortest is= " << min << endl;

}

	


