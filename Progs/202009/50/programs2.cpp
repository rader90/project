// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ????? ????????? cp1251
    system("chcp 1251 > null");
    // ?????????? ??????????
    int a,b,i;
    cout << "Chislo a: ";
    cin >> a;
    for(b=i=0;i<a;++i,b=!b){
        cout << b << " ";
    };
    system("pause");
    return 0;
}
