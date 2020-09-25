// Подключение стандартной библиотеки ввода-вывода
#include <iostream>
#include <cmath>
// Подключение пространства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,i,x,s;
	const int n=5;
	int mas[n];
	for(i=0;i<n;++i){
		cout << "Введите целое число для заполнения массива : ";
		cin >> a;
		mas[i]=a;
	};
	cout << "Введите число х : ";
	cin >> x;
	for(i=0;i<n;++i){
		cout << mas[i] << " ";
	};
	cout << endl;
	for(i=1,a=abs(mas[0]-x),s=mas[0];i<n;++i){
		b=abs(mas[i]-x);
		if(x==mas[i]){
			s=mas[i];
			break;
		}else if(a>b){
			s=mas[i];
			a=b;
		};
		
	};
	cout << "s = " << s <<endl;
	system("pause");
	return 0;
}
