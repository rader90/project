// Подключение стандартной библиотеки ввода-вывода
#include <iostream>
#include <stdlib.h> 
#include <ctime>
// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,e,n,i; 
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));		
	cout << "Введите число a: ";
   	cin >> a;
   	cout << "Введите число b: ";
   	cin >> b;
   	cout << "Введите число n: ";
   	cin >> n;
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		e=rand()%(b-a+1)+a;
		cout << e << " " << endl;
	}
	system("pause");
    return 0;
}
  
