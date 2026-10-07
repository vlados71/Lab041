#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "Taylor series: ln((1+x)/(1-x)) = 2*(x + x^3/3 + x^5/5 + ...)" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << "  |"
		<< setw(10) << "ln(...)" << "  |"
		<< setw(10) << "S" << "  |"
		<< setw(5) << "n" << "  |"
		<< endl;
	cout << "---------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		n = 0;
		a = 2 * x;          // перший доданок (з урахуванням множника 2)
		S = a;
		do {
			n++;
			R = x * x * (2. * n - 1) / (2. * n + 1);   // коефіцієнт рекурентності
			a *= R;
			S += a;
		} while (fabs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << "  |"
			<< setw(10) << setprecision(5) << log((1 + x) / (1 - x)) << "  |"
			<< setw(10) << setprecision(5) << S << "  |"
			<< setw(5) << n << "  |"
			<< endl;
		x += dx;
	}
	cout << "---------------------------------------------" << endl;

	return 0;
}