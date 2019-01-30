

#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
struct Height {
	float x;
	float y;
	float s;
};

Height calcHeightPoint(float x1, float y1, float x2, float y2, float x3, float y3) {
	float k1 = (y2 - y1) / (x2 - x1);
	float b1 = y1 - (y2 - y1) / (x2 - x1) * x1;
	float k2 = -(x2 - x1) / (y2 - y1);
	float b2 = y3 + (x2 - x1) / (y2 - y1) * x3;
	float y = (k1 * b2 - k2 * b1) / (k1 - k2);
	float x = (b2 - b1) / (k1 - k2);
	float s = sqrt((x - x3) * (x - x3) + (y - y3) * (y - y3));
	Height result;
	result.x = x;
	result.y = y;
	result.s = s;
	return result; 
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

	Height p3 = calcHeightPoint(x1, y1, x2, y2, x3, y3);
	Height p2 = calcHeightPoint(x1, y1, x3, y3, x2, y2);
	Height p1 = calcHeightPoint(x3, y3, x2, y2, x1, y1);

	cout << "(" << p3.x << ", " << p3.y << ")" << " s=" << p3.s << endl;
	cout << "(" << p2.x << ", " << p2.y << ")" << " s=" << p2.s << endl; 
	cout << "(" << p1.x << ", " << p1.y << ")" << " s=" << p1.s << endl;

	int index = 3;
	float longest = p3.s;
	if (p2.s > longest) {
		longest = p2.s;
		index = 2;
	}
	if (p1.s > longest) {
		longest = p1.s;
		index = 1;
	}
	cout << "longest: p" << index <<" s=" << longest << endl;
}
