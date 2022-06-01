#include <iostream>
using namespace std;

int main()
{
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "Введите a " << endl;
	cin >> x1 >> y1;
	cout << "Введите b " << endl;
	cin >> x2 >> y2;
	cout << "Введите c " << endl;
	cin >> x3 >> y3;
	if ((x2 - x1) * (x3 - x1) + (y2 - y1) * (y3 - y1) == 0)
	{
		x4 = x3 + x2 - x1;
		y4 = y3 + y2 - y1;
	}
	else if ((x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2) == 0)
	{
		x4 = x3 + x1 - x2;
		y4 = y3 + y1 - y2;
	}
	else if ((x1 - x3) * (x2 - x3) + (y1 - y3) * (y2 - y3) == 0)
	{
		x4 = x2 + x1 - x3;
		y4 = y2 + y1 - y3;
	}
	cout << x4 << y4;
	return 0;
}