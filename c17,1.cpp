#include <iostream>

using namespace std;
int main()
{
	float v1, v2, v3, t1, t2, t3, sum1, sum2;
	cout << "Введите 1 объём ";
	cin >> v1;
	cout << "Введите 1 температуру ";
	cin >> t1;
	cout << "Введите 2 объём ";
	cin >> v2;
	cout << "Введите 2 температуру ";
	cin >> t2;
	v3 = v1 + v2;
	sum1 = (v1 / v3) * t1;
	sum2 = (v2 / v3) * t2;
	t3 = sum1 + sum2;
	cout << "Объём смеси " << v3 << endl;
	cout << "Температура смеси " << t3;
}