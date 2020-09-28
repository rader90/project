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
	int a,b,i,x,s,j,n;
	srand(time(0));
	vector <int> vec(0);
	cout << "Введите длину массива : ";
	cin >> n;
	for(i=0;i<n;++i){
		a=rand()%10+1;
		vec.push_back(a);
	};
	for(i=0;i<n;++i){
		cout << vec[i] << " ";
	};
	cout << "\n" << vec.size() << endl;
	for(;i<n+2;++i){
		a=rand()%10+1;
		vec.push_back(a);
	};
	for(i=0;i<n+2;++i){
		cout << vec[i] << " ";
	};
	cout << "\n" << vec.size() << endl;
	system("pause");
	return 0;
}
