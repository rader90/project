// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,c;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ������� ����� a: ";
	cin >> b;
	switch(b){
		case 2:cout << a*a << endl;
			break;
		case 3:cout << a*a*a << endl;
			break;
		case 4:cout << a*a*a*a << endl;
			break;
		default: cout << "ERROR" << endl;
	};
	system("pause");
	return 0;
}
