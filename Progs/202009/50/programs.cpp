// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,i;
	do{
	cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    if(a<=b){
	for(i=2;i<=b&&a<=i;i+=2){
		
		cout << i << " ";
		
	};
}else{
	cout << "Введите a<b" << endl;
};
}while(a>=b);
	system("pause");
	return 0;
}