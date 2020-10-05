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
    //cout << "  ";
    cout.setf( ios::right );
    cout << endl;
    cout << "  ";
    for(m=1; m<=n;++m){
			cout.width(4);
            cout << m;
		};
	cout << endl;
    for(i=1;i<=n;++i){
    	cout << " ";
    	cout << i;
		cout.width(2);
       
        for(m=1; m<=n;++m){
        	cout.width(4);
			cout << m*i;
        };
		cout << endl;
    };
    cout << endl;
    system("pause");
    return 0;
}
