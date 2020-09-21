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
    int a,i,j,c;
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
	// cout << "Введите ответ n : ";
	// cin >> n;
	int mas[5];
	mas[0]=5;
	mas[1]=2;
	mas[2]=3;
	mas[3]=5;
	mas[4]=7;
	for(i=0;i<5;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		cout << mas[i] << " ";
	};
	cout << endl;
	for(j=4;j>=0;--j){
		cout << mas[j] << " ";
	};
	system("pause");
    return 0;
}
  
