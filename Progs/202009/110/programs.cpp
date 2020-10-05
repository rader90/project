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
	cout << endl;
	for(i=0; i<n;++i){
            cout << "*";
		};
		cout << endl;
    for(i=1;i<n-1;++i){
    	cout << "*";
        for(m=2; m<n;++m){
			cout << " ";
        };
        cout << "*";
        cout << endl;
    };
    for(i=0; i<n;++i){
            cout << "*";
		};
    cout << endl;
    system("pause");
    return 0;
}
