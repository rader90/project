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
	if(a>0){
		cout << "1" << endl;
	}
	else if(a<0){
		cout << "-1" << endl;
	}
	else{
		cout << "0" << endl;
	}	
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
}

