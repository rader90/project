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
    int a,i=0,n,j=1;
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
    const int m=6;
    int mas[m];
    a=m/2;
    if(m%2!=0){
    	a+=1;
	};
    for(i=0;i<a;++i){
			mas[i] = 2;
    };
    for(;i<m;++i){
			mas[i] = 3;
    };
    for(i=0;i<m;++i){
        cout << mas[i] << " ";
    };
    system("pause");
    return 0;
}
