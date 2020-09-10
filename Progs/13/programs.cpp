// Подключение библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;


int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	int a, b;
	cout << "Ввелите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	if(a%b<1){
		cout << "Нацело  делится" << endl;
	}
	else{
		cout << "Нацело не делиться" << endl;
	};
	
	
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
}

