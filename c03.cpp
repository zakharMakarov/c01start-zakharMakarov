#include <iostream>
using namespace std;

int main()
{
	int r;
	const float pi = 3.1415;
	float res, res_1, res_2;
	cout << "Введите R" << endl;
	cin >> r;
	res = r * r;
	res_1 = (r * r * pi) / 4;
	res_2 = res + res - res_1;
	cout << "Ответ: " << res_2 << endl;
	return 0;
}