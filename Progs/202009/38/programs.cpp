// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,c;
	cout << "������� �����: ";
	cin >> a;
	switch(a){
		case 1:cout << a << " ������" << endl;
			break;
		case 2:
		case 3:
		case 4:cout << a << " ������" << endl;
		default:cout << a << " �����" << endl;
	};
	system("pause");
	return 0;
}
