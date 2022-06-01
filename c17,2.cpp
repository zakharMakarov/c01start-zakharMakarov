#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int r, n;
	cout << "Введите радиус ";
	cin >> r;
	cout << "Введите количество углов ";
	cin >> n;
	double s = ((n * r * r) / 2) * sin(360 / n);
	cout << "Площадь равна " << s;
	return 0;
}