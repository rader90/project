// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;


int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	int a,b,c;
	int i=0,j=0;
	cout << "Ввелите число a: ";
	cin >> a;
	cout << "Ввелите число b: ";
	cin >> b;
	cout << "Ввелите число c: ";
	cin >> c;
	if(a>0){
		++i;
	};
	if(b>0){
		++i;
	};
	if(c>0){
		++i;
	};
	if(a<0){
		++j;
	};
	if(b<0){
		++j;
	};
	if(c<0){
		++j;
	};
	cout << i << " " << j << endl;
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
} 

