// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;

int pl(double a, double b);

int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	double a,b;
	int c;
	cout << "Ввелите радиус круга: ";
	cin >> a;
	cout << "Ввелите сторона квадрата: ";
	cin >> b;
	c=pl(a,b);
	cout << c << endl;	
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 
int pl(double a, double b){
	int c,d;
	c=3.14*a*a;
	d=b*b;
	if(c>d){
		b=1;
	}else if(d>c){
		b=2;
	}else{
		b=0;
	}
	return b;
}
