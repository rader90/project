// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

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
	cout << "Ввелите число c: ";
	cin >> c;
	if(a<=b&&a<=c){
		d=a;
	}else if(b<=a&&b<=c){
		d=b;
	}else{
		d=c;
	};
	cout << d << endl;
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

