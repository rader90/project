// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,c;
	cout << "Введите число: ";
	cin >> a;
	switch(a){
		case 1:cout << a << " корова" << endl;
			break;
		case 2:
		case 3:
		case 4:cout << a << " коровы" << endl;
		default:cout << a << " коров" << endl;
	};
	system("pause");
	return 0;
}
