// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,i;
	cout << "Введите число начало i: ";
	cin >> i;
	cout << "Введите число b: ";
	cin >> a;
	for(i; i<=a;++i){
		cout << i << " ";
	};
	system("pause");
	return 0;
}
