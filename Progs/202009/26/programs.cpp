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
	if(a>=b&&b>0){
		cout << "a/b = " << (a/b) << endl;
	}else if(b>=a&&a>0){
		cout << "b/a = " << (b/a) << endl;
	}else{
		cout << "ERROR" << endl;
	};
	
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

