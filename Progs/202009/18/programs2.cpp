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
	c=abs(a-7);
	d=abs(b-7);
	if(c<d){
		cout << a << endl;
	}else if(d<c){
		cout << b << endl;
	}else if(d=c){
		cout << a << "=" << b << endl;
	};
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

