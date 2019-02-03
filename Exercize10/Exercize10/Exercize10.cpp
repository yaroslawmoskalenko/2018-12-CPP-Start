
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
struct Median {
	float x;
	float y;
	float s;
};

Median calcMedianPoint(float x1, float y1, float x2, float y2, float x3, float y3) {
	float x1m = (x2 + x3) / 2;
	float y1m = (y2 + y3) / 2;
	float s = sqrt((x1m - x1) * (x1m - x1) + (y1m - y1) * (y1m - y1));
	Median result;
	result.s = s;
	result.x = x1m;
	result.y = y1m;
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

	Median p3 = calcMedianPoint(x1, y1, x2, y2, x3, y3);
	Median p2 = calcMedianPoint(x2, y2, x3, y3, x1, y1);
	Median p1 = calcMedianPoint(x3, y3, x1, y1, x2, y2);

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
	cout << "longest: p" << index << " s=" << longest << endl;
}

