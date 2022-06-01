#include <iostream>
using namespace std;
int main()
{
	float H, R, Vc, Vk;
	const float PI = 3.1415;
	cout << "Введите радиус ";
	cin >> R;
	cout << "Введите высоту ";
	cin >> H;
	Vc = H * R * R * PI;
	Vk = Vc / 3;
	cout << "Объём цилиндра" << Vc << endl;
	cout << "Объём конуса" << Vk;
}