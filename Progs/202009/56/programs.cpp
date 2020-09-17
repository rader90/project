// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,c,i;
    b=0;
    for(i=1;i<=3;++i){
    	cout << "Введите число a: ";
   		cin >> a;
   		if(a==2){
   				b=1;
		   };
    };
    cout << b <<endl;
	system("pause");
    return 0;
}
