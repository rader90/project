// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,c,i;
    double e,n;
    e=0;
    cout << "Введите число n: ";
   	cin >> n;
    for(i=1;i<=n;++i){
   		e=1/double(i*i)+e;
		cout.precision(3);
    };
    cout << e << endl;
	system("pause");
    return 0;
}
