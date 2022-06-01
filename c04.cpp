#include <iostream>
using namespace std;

int main()
{
	int x, a, b, c, r;
	cout << "Введите трёхзначное число " << endl;
	cin >> x;
	a = x / 100;
	b = x / 100 % 10;
	c = x % 10;
	r = a * b * c;
	cout << "Ответ: " << r << endl;
	return 0;
}