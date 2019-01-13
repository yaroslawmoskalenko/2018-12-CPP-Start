//Yaroslaw Moskalenko, 2019-01-13
//Тарифний план електролічильника для побутового споживача
//Денний тариф з 7:00 до 23:00
//Перша тарифна зона - до 100 кВт*год - 0.456 грн;
//Друга тарифна зона - від 100 до 600 кВт*год - 0.789 грн;
//Третя тарифна зона - більше 600 кВт*год - 1.479 грн;
//Нічний тариф з 23:00 до 7:00 рахунку – 50% від вартості денної
#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
const float k0_100 = 0.456;
const float k100_600 = 0.789;
const float k600 = 1.479;   

float calc(float countN) {
	float sum = 0;
	if (countN <= 100)
		sum = countN * k0_100;
	else if (countN <= 600)
		sum = 100 * k0_100 + (countN - 100) * k100_600;
	else if (countN >= 600)
		sum = 100 * k0_100 + (600 - 100) * k100_600 + (countN - 600) * k600;
	return sum;
}


int main(int argc, char* argv[])
{
	float dayN1, nightN1, dayN2, nightN2; //Показники за поточний та попередній місяці відповідно денного та нічного тарифу
	cout << "Input current day`s counter="; cin >> dayN1; //Денний поточний місяць
	cout << "Input current night`s counter="; cin >> nightN1; //Нічний поточний місяць
	cout << "Input prev month day`s counter="; cin >> dayN2; //Денний попередній місяць
	cout << "Input prev month night`s counter="; cin >> nightN2; //Нічний попередний місяць
	if (!(dayN1 >= dayN2 && nightN1 >= nightN2)) {
		cout << "Wrong input data" << endl;
		return 1;
	}
	float dayN = dayN1 - dayN2;
	float nightN = nightN1 - nightN2;
	
	/*
	float summDay = 0;
	if (dayN <= 100) 
		summDay = dayN * k0_100; 
	else if (dayN <= 600) 
		summDay = 100 * k0_100 + (dayN - 100) * k100_600;	
	else if (dayN >= 600)
		summDay = 100 * k0_100 + (600 - 100) * k100_600 + (dayN - 600) * k600;
	
	cout << "summDay=" << summDay << endl;
	*/

	float sumDay = calc(dayN);
	float sumNight = calc(nightN) / 2;
	float sumAll = sumDay + sumNight;
	cout << "sumAll=" << sumAll << endl;




   
}
