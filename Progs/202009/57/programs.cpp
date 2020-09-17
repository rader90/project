// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,i,c;
    cout << "Введите число a: ";
    cin >> a;
    for(i=1;i<=a;++i){
    	cout.width(2);
    	cout << right << i << " * 3 = " ;
    	cout.width(2);
		cout << right << i*3 << endl; 
        
    };
	system("pause");
    return 0;
}
