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
	int i=0;
	cout << "Ввелите число a: ";
	cin >> a;
	cout << "Ввелите число b: ";
	cin >> b;
	cout << "Ввелите число c: ";
	cin >> c;
	cout << "Ввелите число d: ";
	cin >> d;
	if(a==2){
		++i;
	};
	if(b==2){
		++i;
	};
	if(c==2){
		++i;
	};
	if(d==2){
		++i;
	};
	if(a==5){
		++i;
	};
	if(b==5){
		++i;
	};
	if(c==5){
		++i;
	};
	if(d==5){
		++i;
	};
	cout << i << endl;
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

