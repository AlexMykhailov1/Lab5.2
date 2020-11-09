// Lab4.7.cpp
// Михайлов Олександр
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних
// Варіант 24

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double S(const double x, const double eps, int& n, double s);

double A(const double x, const int n, double a);

int main()
{
	double xfirst, xlast, x, dx, eps, s = 0;
	int n = 0;

	cout << "xfirst must be bigger than 1" << endl;
	cout << "xfirst = "; cin >> xfirst;
	cout << "xlast = "; cin >> xlast;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;

	cout << "----------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(10) << "   log(x + 1)" << "   |" << setw(7) << "s" << "      |" << setw(5) << "n" << "   |" << endl;
	cout << "----------------------------------------------------" << endl;

	x = xfirst;
	while (x <= xlast)
	{
		s = S(x, eps, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << "   |   " << setw(10) << setprecision(5) << log(x + 1) << "   |" << setw(10) << setprecision(5) << s << "   |" << setw(5) << n << "   |" << endl;
		x += dx;
	}
	cout << "----------------------------------------------------" << endl;

	cin.get();
	return 0;
}

double S(const double x, const double eps, int& n, double s) {
	n = 0;
	double a = x;
	s = a;
	do {
		n++;
		a = A(x, n, a);
		s += a;
	} while (x > -1 && x <= 1);
	return s;
}

double A(const double x, const int n, double a) {
	double R = -n / (n + 1) * x;
	a *= R;
	return a;
}