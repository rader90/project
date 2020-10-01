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
	int const t = 5;
	vector <int> vec(0);
	a=rand()%2;
	for(i=0;i<t;++i){
		vec.push_back(0);
	};
	for(i=0;i<t;++i){
		if(i%2==a){
			vec[i]=1;	
		}
	};
	vec.push_back(0);
	vec.push_back(0);
	for(j=vec.size()-1;j>=0;--j){
		vec[j]=vec[j-1];
	}
	vec[0]=2;
	vec[vec.size()-1]=2;
	for(i=0;i<vec.size();++i){
		cout << vec[i] << " ";
	};
	cout << endl;
	system("pause");
	return 0;
}
