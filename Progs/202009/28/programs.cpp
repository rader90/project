// ����������� ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;

double perevod(int a);

int main(void)
{
    // ����� ��������� 
    system("chcp 1251 > null");
    // ���������� ���������� 
    int a,b;
    double c,d;
    cout << "������� ��/�: ";
    cin >> a;
    cout << "������� �/�: ";
    cin >> b;
    c=perevod(a);
    d=(double)b;
    if(c>d){
        cout << a << " ��/�" << endl;
    }else if(d>c){
        cout << b << " �/c" << endl;
    }else{
        cout << "�����" << endl;
    };

    // ������� ��� ����� ����� ���������� ����
    system("pause");
    return 0;
} 

double perevod(int a){
    double b;
    b=(double)a/3.6;

    return b;
}