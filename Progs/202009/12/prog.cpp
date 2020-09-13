#include <iostream>

using namespace std;

int main()
{
	// Смена кодировки на 1251, отключаем вывод информации о смене кодировки
	system("chcp 1251 > null");
	//  Объявление переменных
	int a;
	cout << "Введите число: " ;
	cin >> a; 
	if(!(a%2) && a>5){
		cout << "1"<<endl;
	}else{
		cout << "0"<<endl;
	}
	
	system("pause");
	return 0;
}

