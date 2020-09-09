#include <iostream>

using namespace std;

int chislo(int a, int b, int c);

int main()
{
	// Смена кодировки на 1251, отключаем вывод информации о смене кодировки
	system("chcp 1251 > null");
	//  Объявление переменных
	int a;
	int b;
	int c;
	cout << "Введите число 1: ";
	cin >> a;
	cout << "Введите число 2: ";
	cin >> b;
	cout << "Введите число 3: ";
	cin >> c;
	c = chislo(a, b, c);
	cout << c << endl;
	system("pause");
	return 0;
}
// Функция 
int chislo(int a, int b, int c)
{
	int f;
	f=a*100+b*10+c;
	return f;
}
