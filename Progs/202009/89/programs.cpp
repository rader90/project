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
    int a,i,c,t=0;
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
    cout << "Введите ответ a : ";
    cin >> a;
    const int n=6;
    int mas[n];
    for(i=0;i<n;++i){
        // rand() % [ (MAX - MIN + 1) ] + [ MIN ];
        c=rand()%10+1;
        mas[i] = c;
		cout << mas[i] << " ";
    };
    for(i=0;i<n;++i){
		if(a==mas[i]){
			t=1;
		};
    };
	cout << "\n" << t << endl;
    system("pause");
    return 0;
}
