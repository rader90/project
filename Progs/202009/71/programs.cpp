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
    int a,b,e,n,i,j; 
    double c;
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
	cout << "Введите ответ n : ";
	cin >> n;
	for(e=j=i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		a=rand()%6+1;
		cout << "Первый кубик " << a;
		++e;
		if(a>=4){
			b=rand()%6+1;
			cout << ", второй кубик " << b;
			if(b>=4){
			++j;
			};
		};
		cout << endl;
	};
	c=double(j)/double(n);
	cout << "\n" << c*100 << "%" << endl;
	system("pause");
    return 0;
}
  
