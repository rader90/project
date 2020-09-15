// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,i;
	b=2;
	cout << "Введите число a: ";
	cin >> a;
	for(i=0; i<a;++i){
		cout << b << " ";
		b+=2;
	};
	system("pause");
	return 0;
}
