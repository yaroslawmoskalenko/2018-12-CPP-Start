#include "pch.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int cards[5]; //card[0], card[1], card[2], card[3], card[4] 

	cout << "Input card1= "; cin >> cards[0];
	cout << "Input card2= "; cin >> cards[1];
	cout << "Input card3= "; cin >> cards[2];
	cout << "Input card4= "; cin >> cards[3];
	cout << "Input card5= "; cin >> cards[4];
	int k = 0; 
	int kMax = 0;
	int i;
	int j;
	for (i = 0; i < 5; i++) {
		k = 1;
		for (j = 0; j < 5; j++)
			if (i != j && cards[i] == cards[j])
				k++;
		if (kMax < k)
			kMax = k;
	}
		if (kMax == 5)
			cout << 1 << endl;
		else if (kMax == 4)
			cout << 2 << endl;
		else if (kMax == 3)
			cout << 3 << endl;
		else if (kMax == 2)
			cout << 4 << endl;
		else 
			cout << 5 << endl;
		
	
}
