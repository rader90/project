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
		cout << "Введите знак числа 1 = \"+\" 2 = \"*\" 3 = \"/\": ";
		cin >> a;
		cout << "Введите числo b: ";
		cin >> b;
		cout << "Введите числo c: ";
		cin >> c;
		switch(a){
			case 1: cout << b+c << endl;
				break;
			case 2: cout << b*c << endl;
				break;
			case 3: if(c!=0){
				cout << b/c; 
				break;
			}else{
				cout << "c=0 b\c ERROR" << endl;
			};
				break;
			default:cout << "Введите знак числа 1 = \"+\" 2 = \"*\" 3 = \"/\": ";
				break;
		};
		cin.clear();
		cin.ignore(32767,'\n'); 
	};
	system("pause");
	return 0;
}
