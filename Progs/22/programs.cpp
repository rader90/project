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
	if(a%2==0&&a%3==0){
		cout << "����� ������� �� 2 � 3" << endl;
	}
	else if(a%2==0){
		cout << "����� ������� �� 2" << endl;
	}
	else if(a%3==0){
		cout << "����� ������� �� 3" << endl;
	}else{
		cout << "0" << endl;
	};	
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
}

