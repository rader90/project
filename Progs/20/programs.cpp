// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;


int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	int a;
	cout << "Ввелите год: ";
	cin >> a;
	if(a%4==0&&a%100==0&&a%400==0){
		cout << "високосный год" << endl;
	}
	else if(a%4==0&&a%100==0){
		cout << "не високосный год" << endl;
	}
	else if(a%4==0){
		cout << "високосный год" << endl;
	}else{
		cout << "не високосный год" << endl;
	};	
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
}

