// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,c,e,i,l;
    cout << "Введите число a: ";
   	cin >> a;
    for(b=e=c=i=1,l=0;i<=a;++i){
		if(e==a){
			l=1;
		}
		e=b+c;
		b=c;
		c=e;
    }; 
	cout << l <<endl;
	system("pause");
    return 0;
}
  
