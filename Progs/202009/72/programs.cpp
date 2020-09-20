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
    int a,b,c,e,n,i,j,m,h,t;
	bool v=false;
	e=1000;
    // инициализация генератора случайных чисел с помощью метки времени 0
    srand(time(0));
	cout << "Введите ответ n : ";
	cin >> n;
	for(i=0;e>0;++i){
		
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		a=rand()%9+1;
		b=rand()%9+1;
		c=rand()%9+1;
		for(j=1,m=2,h=3; h<=9; ++j,++m,++h){
			n=j*100+m*10+h;
			t=a*100+b*10+c;
			if(n==t){
				v=true;
			}else{
				v=false;
			};
		};
		if(v){
			e+=3;
			cout << "Счёт увеличивается на 3 руб "<< a << b << c << " e = " << e << endl;
		}else if(a==b&&b==c&&a!=7){
			e+=5;
			cout << "Счёт увеличивается на 5 руб " << a << b << c << " e = " << e << endl;
		}else if(a==b&&b==c&&a==7){
			e+=50;
			cout << "Счёт увеличивается на 50 руб " << a << b << c << " e = "<< e  << endl;
		}else{
			e-=1;
			cout << "Пользователь проигрывает 1 руб " << a << b << c << " e = " << e << endl;
		};
		
	};
	system("pause");
    return 0;
}
  
