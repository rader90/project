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
	int i=0;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	cout << "������� ����� c: ";
	cin >> c;
	cout << "������� ����� d: ";
	cin >> d;
	if(a==2){
		++i;
	};
	if(b==2){
		++i;
	};
	if(c==2){
		++i;
	};
	if(d==2){
		++i;
	};
	if(a==5){
		++i;
	};
	if(b==5){
		++i;
	};
	if(c==5){
		++i;
	};
	if(d==5){
		++i;
	};
	cout << i << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

