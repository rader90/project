// ����������� ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;


int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	int a,b,c,d,e,f;
	d=e=f=0;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	cout << "������� ����� c: ";
	cin >> c;
	if(a==2){
		d=1;
	};
	if(b==2){
		e=1;
	};
	if(c==2){
		f=1;
	};
	cout << d+e+f << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

