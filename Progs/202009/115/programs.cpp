// Подключение стандартной библиотеки ввода-вывода
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// Подключение пространства имен std
using namespace std;
void add(double x, double y, double &c);

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    double a,b,c;
    cout << "Введите высоту a : ";
    cin >> a;
    cout << "Введите высоту b : ";
    cin >> b;
	cout << a << " + " << b << " = ";
	add(a,b,c);
	cout << c << endl;
    system("pause");
    return 0;
}
void add(double x, double y, double &c){
	c=x+y;
}
