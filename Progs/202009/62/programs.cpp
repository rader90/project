// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,c,e,i;
    cout << "Введите число a: ";
   	cin >> a;
    for(e=c=i=1,b=0;i<=a;++i){
		cout << e << " ";
		e=b+c;
		b=c;
		c=e;
		
    }; 
	system("pause");
    return 0;
}
  
