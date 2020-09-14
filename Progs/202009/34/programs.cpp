// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;


int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	int a,b;
	cout << "Ввелите число a: ";
	cin >> a;
	cout << "Ввелите число b: ";
	cin >> b;
	if((a>0&&b>0)||(a<0&&b<0)){
		cout <<  "1" << endl;
	}else{
		cout <<  "0" << endl;
	};
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

