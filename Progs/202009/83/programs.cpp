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
    int i,j=0,sum=0, m;
	double a=0,c=0;
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
	// cout << "Введите ответ n : ";
	// cin >> n;
	const int n=10;
	int mas[n];
	
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		c=rand()%99+1;
		mas[i]=c;
	};
	cout << "Введите число цифр в строке: ";
	cin >> m;
	
	for(i=0;i<n;++i,++j){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		cout.setf(ios::left);
		cout.width(2);
		if(m==j){		
			cout << endl;
			j=0;
		};
		cout << mas[i] << " ";
	};	
	system("pause");
    return 0;
}
  
