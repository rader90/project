// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,i;
	a=8;
	cout << "Введите число: ";
	cin >> a;
	for(i=0; i<a;++i){
		cout << "8 ";
	};
	system("pause");
	return 0;
}
