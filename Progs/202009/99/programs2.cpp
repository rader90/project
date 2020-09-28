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
	b=0;
	srand(time(0));
	vector <int> vec(0);
	cout << "Введите длину массива : ";
	cin >> n;
	for(i=0;i<n;++i){
		cout << "Введите число : ";
		cin >> a;
		vec.push_back(a);
	};
	for(i=0;i<n;++i){
		cout << vec[i] << " ";
	};
		a=(vec.size())/2;
	
	for(s=0,i=0,j=vec.size()-1;i<a;++i,--j){
		if(vec[i]==vec[j]){
			++s;
		}
	}
	if(s==a){
		b=1;
	}
	cout << "\n" << b << endl;
	system("pause");
	return 0;
}
