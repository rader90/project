// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;


int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	int a,b,c;
	cout << "Ввелите число a: ";
	cin >> a;
	cout << "Ввелите число b: ";
	cin >> b;
	if(a>b){
		c = a;
		a = b;
		b = c;
	};
	cout << "a = " << a << " b = " << b << endl;
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

