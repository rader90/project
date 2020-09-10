// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>
// Подключение стандартной библиотеки математических операций
#include "math.h"

// Подключение пространства имен std
using namespace std;


int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	int a,b;
	double c,d,e;
	cout << "Ввелите возвраст Тани: ";
	cin >> a;
	cout << "Ввелите возвраст Миши: ";
	cin >> b;
	c=double(a+b)/2;
	e=double(a);
	d=double(b);
	cout << "Таня = " << abs(c-e) << " Миша = " << abs(c-d) << endl;
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

