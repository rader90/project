// Подключение стандартной библиотеки ввода-вывода
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// Подключение пространства имен std
using namespace std;
void swap(int x, int y);

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b;
    cout << "Введите высоту a : ";
    cin >> a;
    cout << "Введите высоту b : ";
    cin >> b;
    swap(a,b);
    system("pause");
    return 0;
}
void swap(int x, int y){
	cout << x << " " << y << endl;
}
