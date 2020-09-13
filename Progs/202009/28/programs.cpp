// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;

double perevod(int a);

int main(void)
{
    // Смена кодировки 
    system("chcp 1251 > null");
    // Объявление переменных 
    int a,b;
    double c,d;
    cout << "Ввелите км/ч: ";
    cin >> a;
    cout << "Ввелите м/с: ";
    cin >> b;
    c=perevod(a);
    d=(double)b;
    if(c>d){
        cout << a << " км/ч" << endl;
    }else if(d>c){
        cout << b << " м/c" << endl;
    }else{
        cout << "равны" << endl;
    };

    // Команда для паузы после выполнения кода
    system("pause");
    return 0;
} 

double perevod(int a){
    double b;
    b=(double)a/3.6;

    return b;
}