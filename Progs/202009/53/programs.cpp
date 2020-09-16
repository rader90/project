// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,i;
    cout << "Введите число a: ";
    cin >> a;
    for(i=0;i<a;++i){
        if(i%2==0){
			cout << "0 ";
        }else{
			cout << "1 ";
		};
    };
	system("pause");
    return 0;
}