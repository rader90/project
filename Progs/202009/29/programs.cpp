// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;


int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	int a,b,c,d,e,f;
	d=e=f=0;
	cout << "Ввелите число a: ";
	cin >> a;
	cout << "Ввелите число b: ";
	cin >> b;
	cout << "Ввелите число c: ";
	cin >> c;
	if(a==2){
		d=1;
	};
	if(b==2){
		e=1;
	};
	if(c==2){
		f=1;
	};
	cout << d+e+f << endl;
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

