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
    int a,i,n;
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
    cout << "Введите число n от 0 до 10 : ";
    cin >> n;
    const int m=10;
    int mas[m];
    for(i=0;i<m;++i){
		if(i%2==0){
			mas[i] = 0;
		}else{
			mas[i] = 1;
		}
    };
    for(i=0;i<n;++i){
        cout << mas[i] << " ";
    };
    system("pause");
    return 0;
}
