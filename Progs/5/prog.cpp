#include <iostream>

using namespace std;

int chislo(int a);

int main()
{
	// —мена кодировки на 1251, отключаем вывод информации о смене кодировки
	system("chcp 1251 > null");
	//  ќбъ€вление переменных
	int a;
	cout << "¬ведите число: ";
	cin >> a;
	a = chislo(a);
	cout << a << endl;
	system("pause");
	return 0;
}
// ‘ункци€ суммы трехзначного числа
int chislo(int a)
{
	int b,c,d;
	b=a%10;
	c=a/10%10;
	d=a/100%10;
	a=b+c+d;
	return a;
}
