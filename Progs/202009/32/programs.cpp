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
	int i=0,j=0;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	cout << "������� ����� c: ";
	cin >> c;
	if(a>0){
		++i;
	};
	if(b>0){
		++i;
	};
	if(c>0){
		++i;
	};
	if(a<0){
		++j;
	};
	if(b<0){
		++j;
	};
	if(c<0){
		++j;
	};
	cout << i << " " << j << endl;
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

