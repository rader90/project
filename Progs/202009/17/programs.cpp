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
	
	d=abs(a)-abs(b);
	cout << abs(d) << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
}

