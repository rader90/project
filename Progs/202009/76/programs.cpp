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
	int mas[10];
	for(i=0;i<10;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		c=rand()%6+5;
		mas[i]=c;
	};
	for(j=0;j<10;++j){
		cout << mas[j] << endl;
	};
	system("pause");
    return 0;
}
  
