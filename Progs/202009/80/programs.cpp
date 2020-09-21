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
    int a,i,j=0,c=0,sum=0;
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
	// cout << "Введите ответ n : ";
	// cin >> n;
	const int n=5;
	int mas[n];
	mas[0]=1;
	mas[1]=-2;
	mas[2]=3;
	mas[3]=0;
	mas[4]=-4;
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		sum=mas[i];
		if(sum>0){
			++j;
		}else if(sum<0){
			++c;
		};
	};
	cout << j << "  " << c << endl;
	system("pause");
    return 0;
}
  
