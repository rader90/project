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
    int a,b,e,c,n,i,j; 
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
	for(j=i=0;;){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		a=rand()%(11)+0;
		b=rand()%(11)+0;
		cout << a << " + " << b << endl;
		cout << "Введите ответ n : ";
		cin >> n;
		if(a+b==n){
			cout << "Верно" << endl;
			++i;
		}else{
			cout << "Неверно" << endl;
			++j;
		}
		cout << "Верных ответов " << i << " , неверных " << j << endl;
	}
	system("pause");
    return 0;
}
  
