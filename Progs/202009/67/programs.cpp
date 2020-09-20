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
	c=a;
	for(i=0;c>0;){
		b=c%10;	
		c/=10;
		if(b>0&&a%b==0){
			++i;
		}
	}
	cout << i << endl;
	system("pause");
    return 0;
}
  
