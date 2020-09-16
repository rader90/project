// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int n,i;
	cout << "Введите число n>=2: ";
    cin >> n;
	if(n>=2){
	for(i=2; n>=i;i+=2){
		cout << i << " ";
		};
	};
	system("pause");
	return 0;
}
