// ����������� ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;

int main(void)
{
    // ����� ��������� 
    system("chcp 1251 > null");
    // ���������� ���������� 
    double c,d,f;
    cout << "������� ��/�: ";
    cin >> c;
    cout << "������� �/�: ";
    cin >> d;
    if(c/3.6>d){
        cout << c << " ��/�" << endl;
    }else if(d>c/3.6){
        cout << d << " �/c" << endl;
    }else{
        cout << "�����" << endl;
    };

    // ������� ��� ����� ����� ���������� ����
    system("pause");
    return 0;
} 