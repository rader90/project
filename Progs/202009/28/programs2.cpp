// Подключение стандартной библиотеки ввода-ввывода
#include <iostream>

// Подключение пространства имен std
using namespace std;

int main(void)
{
    // Смена кодировки 
    system("chcp 1251 > null");
    // Объявление переменных 
    double c,d,f;
    cout << "Ввелите км/ч: ";
    cin >> c;
    cout << "Ввелите м/с: ";
    cin >> d;
    if(c/3.6>d){
        cout << c << " км/ч" << endl;
    }else if(d>c/3.6){
        cout << d << " м/c" << endl;
    }else{
        cout << "равны" << endl;
    };

    // Команда для паузы после выполнения кода
    system("pause");
    return 0;
} 