#include <iostream>

using namespace std;

int main()
{
	// Смена кодировки на 1251, отключаем вывод информации о смене кодировки
	system("chcp 1251 > null");
	//  Объявление переменных
	int x;
	cout << "Введите число: " ;
	cin >> x; 
	if(x>=5){
		x=10;
	}else{
		x=0;
	}
	cout << x <<endl;
	system("pause");
	return 0;
}

