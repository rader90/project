// ����������� ����������� ���������� �����-�������
#include <iostream>

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
	if(a<=b&&a<=c){
		d=a;
	}else if(b<=a&&b<=c){
		d=b;
	}else{
		d=c;
	};
	cout << d << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

