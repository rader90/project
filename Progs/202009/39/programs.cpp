// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,c;
	for(;;){
		cout << "Введите число: ";
		cin >> a;
		if(a>9&&a<100){
			b=a%10;
			c=a/10;
			if(b+c>=10){
				cout << "1" << endl;
			}else{
				cout << "0" << endl;
			}
		}else{
			cout << "ERROR" << endl;
		};
		cin.clear();
		cin.ignore(32767,'\n'); 
	};
	system("pause");
	return 0;
}
