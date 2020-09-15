// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int i=5;
	while(i>0){
		cout << i ;
		--i;
	};
	system("pause");
	return 0;
}
