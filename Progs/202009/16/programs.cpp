// ����������� ����������� ���������� �����-�������
#include <iostream>
// ����������� ����������� ���������� �������������� ��������
#include "math.h"

// ����������� ������������ ���� std
using namespace std;


int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	int a,b,c,d;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	cout << "������� ����� c: ";
	cin >> c;
	d=abs(a)+abs(b)+abs(c);
	cout << d << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
}

