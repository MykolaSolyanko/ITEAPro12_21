#include"Quadr_Eq.h"
Quadr_Eq create()
{
	int a[3]{};
	for (size_t i = 0; i < 3; i++)
	{
		cout << "Введите число " << i + 1 << ": "; cin >> a[i];
	}
	return Quadr_Eq(a[0], a[1], a[2]);
}
int main()
{
	setlocale(LC_ALL, "ukr");

	Quadr_Eq q(2, 12, 5);
	q.print();
	q = create();
	q.print();
}