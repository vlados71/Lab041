#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, R, xp, xk, dx, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;


	cout << fixed;
	cout << "Tabulation of the function" << endl;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -2)
			y = x + 3;
		else
			if (-2 < x && x <= 4)
				y = 1 + ((-R - 1) / 6) * (x + 2);
			else
				if (4 < x && x <= 8 - R)
					y = -R;
				else
					if (8 - R < x && x <= 8 + R)
						y = -R + sqrt(R * R - (x - 8) * (x - 8));
					else
						y = -R;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}