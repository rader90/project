// ����������� ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;


int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	int a;
	cout << "������� ���: ";
	cin >> a;
	if(a%4==0&&a%100==0&&a%400==0){
		cout << "���������� ���" << endl;
	}
	else if(a%4==0&&a%100==0){
		cout << "�� ���������� ���" << endl;
	}
	else if(a%4==0){
		cout << "���������� ���" << endl;
	}else{
		cout << "�� ���������� ���" << endl;
	};	
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
}

