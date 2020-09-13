#include <iostream>

using namespace std;

float chislo(int a);

int main()
{
	// —мена кодировки на 1251, отключаем вывод информации о смене кодировки
	system("chcp 1251 > null");
	//  ќбъ€вление переменных
	int a;
	float b;
	cout << "¬ведите число: ";
	cin >> a;
	b = chislo(a);
	cout <<b << endl;
	system("pause");
	return 0;
}
// ‘ункци€ суммы трехзначного числа
float chislo(int a)
{
	int b,c,d,e;
	float f,l;
	b=a%10;
	c=a/10%10;
	d=a/100%10;
	e=a/1000%10;
	f=(float)(b+c+d+e)/4;
	return f;
}
