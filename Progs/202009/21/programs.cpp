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
	if(a>0){
		cout << "1" << endl;
	}
	else if(a<0){
		cout << "-1" << endl;
	}
	else{
		cout << "0" << endl;
	}	
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
}

