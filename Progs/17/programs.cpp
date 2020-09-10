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
	int a,b,c,d;
	cout << "Ввелите число a: ";
	cin >> a;
	cout << "Ввелите число b: ";
	cin >> b;
	
	d=abs(a)-abs(b);
	cout << abs(d) << endl;
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
}

