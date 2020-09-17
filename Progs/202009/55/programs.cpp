// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,i,c;
    c=1;
    double b;
    cout << "Введите число a: ";
    cin >> a;
    for(i=0;i<a;++i){
    	b=(double)c/(c+1);
    	++c;
        cout << b << " ";
        
    };
	system("pause");
    return 0;
}
