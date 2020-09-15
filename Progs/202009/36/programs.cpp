// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,c;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите степень числа a: ";
	cin >> b;
	switch(b){
		case 2:cout << a*a << endl;
			break;
		case 3:cout << a*a*a << endl;
			break;
		case 4:cout << a*a*a*a << endl;
			break;
		default: cout << "ERROR" << endl;
	};
	system("pause");
	return 0;
}
