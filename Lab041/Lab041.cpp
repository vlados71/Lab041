// Lab_04_1.cpp
// Геряк Владислав
// Лабораторна робота № 4.1
// Цикли
// Варіант 5

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i;
	double P;
	
	// 1 спосіб
	i = 1;
	P = 1;
	while (i <= 15)
	{
		P *= (sin(i) * sin(i) + cos(1./i) * cos(1./i)) / (i * i);
		i++;
	}
	cout << P << endl;

	// 2 спосіб
	P =	1;
	i = 1;
	do {
		P *= (sin(i) * sin(i) + cos(1. / i) * cos(1. / i)) / (i * i);
		i++;
	} while (i <= 15);
	cout << P << endl;

	// 3 спосіб
	P = 1;
	for (i = 1; i <= 15; i++)
	{
		P *= (sin(i) * sin(i) + cos(1. / i) * cos(1. / i)) / (i * i);
	}
	cout << P << endl;

	// 4 спосіб
	P = 1;
	for (i = 15; i >= 1; i--)
	{
		P *= (sin(i) * sin(i) + cos(1. / i) * cos(1. / i)) / (i * i);
	}
	cout << P << endl;
	return 0;
}

