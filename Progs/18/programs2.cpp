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
	cout << "Ввелите число b: ";
	cin >> b;
	c=abs(a-7);
	d=abs(b-7);
	if(c<d){
		cout << a << endl;
	}else if(d<c){
		cout << b << endl;
	}else if(d=c){
		cout << a << "=" << b << endl;
	};
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

