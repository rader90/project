// Подключение стандартной библиотеки ввода-вывода
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// Подключение пространства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int i,j,a,b;
	cout << "Введите высоту a : ";
	cin >> a;
	cout << "Введите ширину b : ";
	cin >> b;
	for(i=0;i<3;++i){
		for(j=0;j<5;++j){
		cout << "*";
		};
	};
	cout << endl;
	system("pause");
	return 0;
}
