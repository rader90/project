#include <iostream>

using namespace std;

void time(int a, int b);

int main()
{
	// —мена кодировки на 1251, отключаем вывод информации о смене кодировки
	system("chcp 1251 > null");
	//  ќбъ€вление переменных
	int a;
	int b;
	cout << "язык программировани€ —++ лекции и уражнени€ глава 2 упражнение 7" << endl;
	cout << "Enter the number of hours: ";
	cin >> a;
	cout <<"Enter the number of minutes: ";
	cin >> b;
	time(a, b);
	system("pause");
	return 0;
}
// ‘ункци€ вывода времени
void time(int a, int b)
{
	cout << "Time " << a << ":" << b << endl;
}
