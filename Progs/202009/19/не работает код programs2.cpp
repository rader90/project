// ����������� ����������� ���������� �����-�������
#include <iostream>
// ����������� ����������� ���������� C++
// �������������� ��������
#include <cmath>

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
	e=abs(c-a);
	d=abs(c-b);
	cout << "���� = " << e << " ���� = " << d << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

