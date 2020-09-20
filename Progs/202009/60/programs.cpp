// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,c,i;
    c=2;
    b=0;
    cout << "Введите число a: ";
   	cin >> a;
    for(i=1;i<=a;++i){
    	b+=2;
    	if(i%2!=0&&i>1){
    		c=c-b;
		}else if(i%2==0&&i>1){
			c=c+b;
		}
    };
    cout << c << endl;
	system("pause");
    return 0;
}
