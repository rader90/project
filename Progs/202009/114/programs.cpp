// Подключение стандартной библиотеки ввода-вывода
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// Подключение пространства имен std
using namespace std;
void swap(int &x, int &y);

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,c;
    cout << "Введите высоту a : ";
    cin >> a;
    cout << "Введите высоту b : ";
    cin >> b;
	cout << a << " " << b << endl;
	swap(a,b);
	cout << a << " " << b << endl;
    system("pause");
    return 0;
}
void swap(int &x, int &y){
	int a;
	a=x;
	x=y;
	y=a;
}
