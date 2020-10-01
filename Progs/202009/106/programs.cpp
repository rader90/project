// Подключение стандартной библиотеки ввода-вывода
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// Подключение пространства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int i,j,n,m;
	cout << "Введите высоту n : ";
	cin >> n;
	for(i=0;i<=n;++i){
		cout << "\n";
		for(j=0;j<n-i;++j){
		cout << "*";
		};
	};
	cout << endl;
	system("pause");
	return 0;
}
