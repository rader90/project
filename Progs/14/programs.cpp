// ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;


int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	int x;
	cout << "������� ����� x: ";
	cin >> x;
	if(x>=0){
		cout << x << endl;
	}
	else{
		x=-x;
		cout << x << endl;
	};
	
	
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
}

