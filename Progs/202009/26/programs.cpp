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
	if(a>=b&&b>0){
		cout << "a/b = " << (a/b) << endl;
	}else if(b>=a&&a>0){
		cout << "b/a = " << (b/a) << endl;
	}else{
		cout << "ERROR" << endl;
	};
	
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 

