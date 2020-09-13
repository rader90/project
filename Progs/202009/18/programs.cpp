// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>
// Подключение стандартной библиотеки математических операций
#include "math.h"

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
	if(a==b){
		cout << " a и b одинаково близки по значению к числу 7 " << a << "=" << b << endl;
	}else if ((a>7&&b>7)&&a<b){
		cout << a << endl;
	}else if((a>7&&b>7)&&a>b){
		cout << b << endl;
	}else if ((a<7&&b<7)&&a<b){
		cout << b << endl;
	}else if((a<7&&b<7)&&a>b){
		cout << a << endl;
	}else if (a<7&&b>7&&a<b&&a>=0){
		c=b-7;
		d=7-a;
		if(c>d){
			cout << a << endl;
		}else if(c=d){
			cout << " a и b одинаково близки по значению к числу 7 " << a << "=" << b << endl;
		}else if(c<d){
			cout << b << endl;
		};
	}else if((a>7&&b<7)&&a>b&&b>=0){
		c=7-b;
		d=a-7;
		if(c>d){
			cout << b << endl;
		}else if(c=d){
			cout << " a и b одинаково близки по значению к числу 7 " << a << "=" << b << endl;
		}else if(c<d){
			cout << a << endl;
		}
	}else if(a=7){
		cout << a << endl;
	}else if(b=7){
		cout << b << endl;
	};
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

