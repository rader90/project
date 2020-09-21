// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // Смена кодировки cp1251
    system("chcp 1251 > null");
    // Объявление переменных
    int a,b,i,j,x,y;
	int mas[5];
	mas[0]=3;
	mas[1]=2;
	mas[2]=2;
	mas[3]=5;
	mas[4]=7;
	cout << mas[4] << endl;
	system("pause");
    return 0;
}

