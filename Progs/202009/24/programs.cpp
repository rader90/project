// ����������� ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;


int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	int a,b,c;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	if(a>b){
		c = a;
		a = b;
		b = c;
	};
	cout << "a = " << a << " b = " << b << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

