// Подключение библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;


int main(void)
{
	// Смена кодировки 
	system("chcp 1251 > null");
	// Объявление переменных 
	int x;
	cout << "Ввелите число x: ";
	cin >> x;
	if(x>=0){
		cout << x << endl;
	}
	else{
		x=-x;
		cout << x << endl;
	};
	
	
	// Команда для паузы после выполнения кода
	system("pause");
	return 0;
}

