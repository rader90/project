// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,c,d,i;
    cout << "Введите число a: ";
   	cin >> a;
	do{
		b=a%10;
		cout << b << " ";
		a/=10;
	}while(a);
	system("pause");
    return 0;
}
  
