#include <iostream>

using namespace std;

int main()
{
	// Смена кодировки на 1251, отключаем вывод информации о смене кодировки
	system("chcp 1251 > null");
	//  Объявление переменных
	int a,b;
	cout << "Введите число: " ;
	cin >> a; 
	b=a%2;
	if(b>0){
		cout << "0"<<endl;
	}else{
		cout << "1"<<endl;
	}
	
	system("pause");
	return 0;
}

