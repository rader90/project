// ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;


int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	int a,b;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	if((a%2==0)&&(b%2==0)){
		cout << "1" << endl;
	}
	else if((a%2>0)&&(b%2>0)){
		cout << "1" << endl;
	}
	else{
		cout << "0" << endl;
	};
	
	
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
}

