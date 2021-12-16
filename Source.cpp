#include"Quadr_Eq.h"

#include <vector>
Quadr_Eq create()
{
	constexpr int x_min{ 0 }, x_max{ 255 };
	int a[3]{};
	for (size_t i = 0; i < 3; i++)
	{
		for (;;)
		{
			cout << "Введите число в диапазоне от "<<x_min<<" до "<< x_max <<"\n" << i + 1 << ": "; cin >> a[i];
			if (a[i] >= x_min && a[i] <= x_max) {
				break;
			}
			else {
				cout << "Некорректный ввод! Повторите попытку\n";
			}
		}
	}
	return Quadr_Eq(a[0], a[1], a[2]);
}
int main()
{
	setlocale(LC_ALL, "ukr");
	Quadr_Eq h{ create() };
	h.print();
}