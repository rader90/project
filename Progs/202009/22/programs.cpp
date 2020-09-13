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
	if(a%2==0&&a%3==0){
		cout << "Число делится на 2 и 3" << endl;
	}
	else if(a%2==0){
		cout << "Число делится на 2" << endl;
	}
	else if(a%3==0){
		cout << "Число делится на 3" << endl;
	}else{
		cout << "0" << endl;
	};	
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
}

