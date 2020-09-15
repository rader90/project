// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,i;
	a=8;
	cout << "Введите число повторений a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	for(i=0; i<a;++i){
		cout << b << " ";
	};
	system("pause");
	return 0;
}
