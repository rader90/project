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
	int a,b;
	double c,d,e;
	cout << "������� �������� ����: ";
	cin >> a;
	cout << "������� �������� ����: ";
	cin >> b;
	c=double(a+b)/2;
	e=double(a);
	d=double(b);
	cout << "���� = " << abs(c-e) << " ���� = " << abs(c-d) << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

