// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,c,i;
    cout << "Введите число a: ";
   	cin >> a;
   	cout << "Введите число b: ";
   	cin >> b;
   	if(a>b){
   		c=a;
	}else{
	   	c=b;
	};
    for(i=c;i>=1;--i){
		if(a%i==0&&b%i==0){
			cout << i <<endl;
			break;
		};
    };
	system("pause");
    return 0;
}
  
