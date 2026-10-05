#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double P, S;
	int n, i;

	// 1 спосіб
	P = 1;
	n = 1;
	while (n <= 10)
	{
		S = 0;
		i = 1;
		while (i <= n)
		{
			S += 1. / i;
			i++;
		}
		P *= (n + S) / sqrt(S);
		n++;
	}
	cout << P << endl;

	// 2 спосіб
	P = 1;
	n = 1;
	do {
		S = 0;
		i = 1;
		do {
			S += 1. / i;
			i++;
		} while (i <= n);
		P *= (n + S) / sqrt(S);
		n++;
	} while (n <= 10);
	cout << P << endl;

	//3 спосіб	
	P = 1;
	for (n = 1; n <= 10; n++)
	{
		S = 0;
		for (i = 1; i <= n; i++)
		{
			S += 1. / i;
		}
		P *= (n + S) / sqrt(S);
	}
	cout << P << endl;

	//4 спосіб
	P = 1;
	for (n = 10; n >= 1; n--)
	{
		S = 0;
		for (i = n; i >= 1; i--)
		{
			S += 1. / i;
		}
		P *= (n + S) / sqrt(S);
	}
	cout << P << endl;
	return 0;
}