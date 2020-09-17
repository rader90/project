// Подключение стандартной библиотеки ввода-вывода
#include <iostream>

// Подключить простраства имен std
using namespace std;

int main(void){
    // ????? ????????? cp1251
    system("chcp 1251 > null");
    // ?????????? ??????????
    int a,b,i;
    cout << " i: ";
    cin >> i;
    cout << " b: ";
    cin >> b;
    for(i;i<=b;++i){

        cout << i*i << " ";

    };
    system("pause");
    return 0;
}
