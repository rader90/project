// ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;


int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	int a, b;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	if(a%b<1){
		cout << "������  �������" << endl;
	}
	else{
		cout << "������ �� ��������" << endl;
	};
	
	
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
}

