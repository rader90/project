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
	b=1;
	srand(time(0));
	vector <int> vec(0);
	cout << "Введите длину массива : ";
	cin >> n;
	for(i=0;i<n;++i){
		cout << "Введите число : ";
		cin >> a;
		vec.push_back(a);
	};
	for(i=0;i<vec.size();++i){
		cout << vec[i] << " ";
	};
	a=vec[0];
	for(i=0,j=1;j<vec.size();++i,++j){
		vec[i]=vec[j];
	}
	vec[vec.size()-1]=a;
	cout << endl;
	for(i=0;i<vec.size();++i){
		cout << vec[i] << " ";
	};
	cout << endl;
	system("pause");
	return 0;
}
