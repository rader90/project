// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,i,j,x,y;
    int mas[5];
    mas[0]=3;
    mas[1]=2;
    mas[2]=2;
    mas[3]=5;
    mas[4]=7;
 	cout << "������� ����� a: ";
    cin >> a;
    cout << mas[a] << endl;
    system("pause");
    return 0;
}
